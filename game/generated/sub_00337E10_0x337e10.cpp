#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00337E10
// Address: 0x337e10 - 0x338000
void sub_00337E10_0x337e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337E10_0x337e10");
#endif

    switch (ctx->pc) {
        case 0x337e80u: goto label_337e80;
        case 0x337ebcu: goto label_337ebc;
        case 0x337ec4u: goto label_337ec4;
        case 0x337ef8u: goto label_337ef8;
        case 0x337f04u: goto label_337f04;
        case 0x337f54u: goto label_337f54;
        case 0x337facu: goto label_337fac;
        default: break;
    }

    ctx->pc = 0x337e10u;

label_337e10:
    // 0x337e10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x337e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337e18: 0x51282  srl         $v0, $a1, 10
    ctx->pc = 0x337e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 10));
    // 0x337e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337e20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337e24: 0x30a303ff  andi        $v1, $a1, 0x3FF
    ctx->pc = 0x337e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x337e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337e2c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337E2Cu;
    {
        const bool branch_taken_0x337e2c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x337E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E2Cu;
        // 0x337e30: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e2c) {
            ctx->pc = 0x337E40u;
            goto label_337e40;
        }
    }
    ctx->pc = 0x337E34u;
    // 0x337e34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x337e38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337E38u;
    {
        const bool branch_taken_0x337e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E38u;
        // 0x337e3c: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e38) {
            ctx->pc = 0x337E50u;
            goto label_337e50;
        }
    }
    ctx->pc = 0x337E40u;
label_337e40:
    // 0x337e40: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337e44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x337E44u;
    {
        const bool branch_taken_0x337e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E44u;
        // 0x337e48: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e44) {
            ctx->pc = 0x337EC8u;
            goto label_337ec8;
        }
    }
    ctx->pc = 0x337E4Cu;
    // 0x337e4c: 0x0  nop
    ctx->pc = 0x337e4cu;
    // NOP
label_337e50:
    // 0x337e50: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337e54: 0x24630a60  addiu       $v1, $v1, 0xA60
    ctx->pc = 0x337e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337e58: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x337e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x337e5c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x337e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x337e60: 0x5085001a  beql        $a0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x337E60u;
    {
        const bool branch_taken_0x337e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x337e60) {
            ctx->pc = 0x337E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E60u;
            // 0x337e64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337ECCu;
            goto label_337ecc;
        }
    }
    ctx->pc = 0x337E68u;
    // 0x337e68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x337e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x337e6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x337e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x337e70: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x337E70u;
    {
        const bool branch_taken_0x337e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E70u;
        // 0x337e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e70) {
            ctx->pc = 0x337EC8u;
            goto label_337ec8;
        }
    }
    ctx->pc = 0x337E78u;
    // 0x337e78: 0xc0cde82  jal         func_337A08
    ctx->pc = 0x337E78u;
    SET_GPR_U32(ctx, 31, 0x337E80u);
    ctx->pc = 0x337A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A08u, 0x337E78u, 0x337E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E80u;
label_337e80:
    // 0x337e80: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x337e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x337e84: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x337e84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x337e88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x337e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e8c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x337e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x337e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e94: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x337e94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x337e98: 0x225282f  dsubu       $a1, $s1, $a1
    ctx->pc = 0x337e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) - GPR_U64(ctx, 5));
    // 0x337e9c: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x337e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x337ea0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x337ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x337ea4: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x337ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x337ea8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x337ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x337eac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x337EACu;
    {
        const bool branch_taken_0x337eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EACu;
        // 0x337eb0: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337eac) {
            ctx->pc = 0x337EC4u;
            goto label_337ec4;
        }
    }
    ctx->pc = 0x337EB4u;
    // 0x337eb4: 0xc0cddb6  jal         func_3376D8
    ctx->pc = 0x337EB4u;
    SET_GPR_U32(ctx, 31, 0x337EBCu);
    ctx->pc = 0x3376D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376D8u, 0x337EB4u, 0x337EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EBCu;
label_337ebc:
    // 0x337ebc: 0xc0cdd48  jal         func_337520
    ctx->pc = 0x337EBCu;
    SET_GPR_U32(ctx, 31, 0x337EC4u);
    ctx->pc = 0x337EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EBCu;
    // 0x337ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337520u, 0x337EBCu, 0x337EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EC4u;
label_337ec4:
    // 0x337ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337ec8:
    // 0x337ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337ecc:
    // 0x337ecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x337ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ED4u;
        // 0x337ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337EDCu;
    // 0x337edc: 0x0  nop
    ctx->pc = 0x337edcu;
    // NOP
    // 0x337ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337ef0: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337EF0u;
    SET_GPR_U32(ctx, 31, 0x337EF8u);
    ctx->pc = 0x337EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EF0u;
    // 0x337ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337EF0u, 0x337EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EF8u;
label_337ef8:
    // 0x337ef8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x337ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337efc: 0xc0cdf84  jal         func_337E10
    ctx->pc = 0x337EFCu;
    SET_GPR_U32(ctx, 31, 0x337F04u);
    ctx->pc = 0x337F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EFCu;
    // 0x337f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337E10u;
    goto label_337e10;
    ctx->pc = 0x337F04u;
label_337f04:
    // 0x337f04: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337F04u;
    {
        const bool branch_taken_0x337f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F04u;
        // 0x337f08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f04) {
            ctx->pc = 0x337F18u;
            goto label_337f18;
        }
    }
    ctx->pc = 0x337F0Cu;
    // 0x337f0c: 0xf  sync
    ctx->pc = 0x337f0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337f10: 0x42000038  ei
    ctx->pc = 0x337f10u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337f18:
    // 0x337f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337f20: 0x3e00008  jr          $ra
    ctx->pc = 0x337F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F20u;
        // 0x337f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337F28u;
    // 0x337f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f34: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x337f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x337f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337f3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x337f40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x337f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x337f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x337f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x337f4c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337F4Cu;
    SET_GPR_U32(ctx, 31, 0x337F54u);
    ctx->pc = 0x337F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337F4Cu;
    // 0x337f50: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337F4Cu, 0x337F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337F54u;
label_337f54:
    // 0x337f54: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x337F54u;
    {
        const bool branch_taken_0x337f54 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x337F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F54u;
        // 0x337f58: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f54) {
            ctx->pc = 0x337F7Cu;
            goto label_337f7c;
        }
    }
    ctx->pc = 0x337F5Cu;
    // 0x337f5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x337f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x337f60: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x337f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x337f64: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x337F64u;
    {
        const bool branch_taken_0x337f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x337F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F64u;
        // 0x337f68: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f64) {
            ctx->pc = 0x337F7Cu;
            goto label_337f7c;
        }
    }
    ctx->pc = 0x337F6Cu;
    // 0x337f6c: 0x24420a60  addiu       $v0, $v0, 0xA60
    ctx->pc = 0x337f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2656));
    // 0x337f70: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x337f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x337f74: 0x54710008  bnel        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x337F74u;
    {
        const bool branch_taken_0x337f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x337f74) {
            ctx->pc = 0x337F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337F74u;
            // 0x337f78: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337F98u;
            goto label_337f98;
        }
    }
    ctx->pc = 0x337F7Cu;
label_337f7c:
    // 0x337f7c: 0x52600018  beql        $s3, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x337F7Cu;
    {
        const bool branch_taken_0x337f7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x337f7c) {
            ctx->pc = 0x337F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337F7Cu;
            // 0x337f80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337FE0u;
            goto label_337fe0;
        }
    }
    ctx->pc = 0x337F84u;
    // 0x337f84: 0xf  sync
    ctx->pc = 0x337f84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337f88: 0x42000038  ei
    ctx->pc = 0x337f88u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337f8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x337F8Cu;
    {
        const bool branch_taken_0x337f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F8Cu;
        // 0x337f90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f8c) {
            ctx->pc = 0x337FE0u;
            goto label_337fe0;
        }
    }
    ctx->pc = 0x337F94u;
    // 0x337f94: 0x0  nop
    ctx->pc = 0x337f94u;
    // NOP
label_337f98:
    // 0x337f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x337f9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x337F9Cu;
    {
        const bool branch_taken_0x337f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F9Cu;
        // 0x337fa0: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f9c) {
            ctx->pc = 0x337FC8u;
            goto label_337fc8;
        }
    }
    ctx->pc = 0x337FA4u;
    // 0x337fa4: 0xc0cde82  jal         func_337A08
    ctx->pc = 0x337FA4u;
    SET_GPR_U32(ctx, 31, 0x337FACu);
    ctx->pc = 0x337A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A08u, 0x337FA4u, 0x337FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FACu;
label_337fac:
    // 0x337fac: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x337facu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x337fb0: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x337fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x337fb4: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x337fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x337fb8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x337fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x337fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337FBCu;
    {
        const bool branch_taken_0x337fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FBCu;
        // 0x337fc0: 0x223882d  daddu       $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fbc) {
            ctx->pc = 0x337FCCu;
            goto label_337fcc;
        }
    }
    ctx->pc = 0x337FC4u;
    // 0x337fc4: 0x0  nop
    ctx->pc = 0x337fc4u;
    // NOP
label_337fc8:
    // 0x337fc8: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x337fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_337fcc:
    // 0x337fcc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x337FCCu;
    {
        const bool branch_taken_0x337fcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FCCu;
        // 0x337fd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fcc) {
            ctx->pc = 0x337FE0u;
            goto label_337fe0;
        }
    }
    ctx->pc = 0x337FD4u;
    // 0x337fd4: 0xf  sync
    ctx->pc = 0x337fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337fd8: 0x42000038  ei
    ctx->pc = 0x337fd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337fdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x337fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_337fe0:
    // 0x337fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x337fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x337FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FF4u;
        // 0x337ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337FFCu;
    // 0x337ffc: 0x0  nop
    ctx->pc = 0x337ffcu;
    // NOP
    ctx->pc = 0x338000u;
}
