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

// Function: sub_00334F00
// Address: 0x334f00 - 0x334f90
void sub_00334F00_0x334f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334F00_0x334f00");
#endif

    switch (ctx->pc) {
        case 0x334f00u: goto label_334f00;
        case 0x334f04u: goto label_334f04;
        case 0x334f08u: goto label_334f08;
        case 0x334f0cu: goto label_334f0c;
        case 0x334f10u: goto label_334f10;
        case 0x334f14u: goto label_334f14;
        case 0x334f18u: goto label_334f18;
        case 0x334f1cu: goto label_334f1c;
        case 0x334f20u: goto label_334f20;
        case 0x334f24u: goto label_334f24;
        case 0x334f28u: goto label_334f28;
        case 0x334f2cu: goto label_334f2c;
        case 0x334f30u: goto label_334f30;
        case 0x334f34u: goto label_334f34;
        case 0x334f38u: goto label_334f38;
        case 0x334f3cu: goto label_334f3c;
        case 0x334f40u: goto label_334f40;
        case 0x334f44u: goto label_334f44;
        case 0x334f48u: goto label_334f48;
        case 0x334f4cu: goto label_334f4c;
        case 0x334f50u: goto label_334f50;
        case 0x334f54u: goto label_334f54;
        case 0x334f58u: goto label_334f58;
        case 0x334f5cu: goto label_334f5c;
        case 0x334f60u: goto label_334f60;
        case 0x334f64u: goto label_334f64;
        case 0x334f68u: goto label_334f68;
        case 0x334f6cu: goto label_334f6c;
        case 0x334f70u: goto label_334f70;
        case 0x334f74u: goto label_334f74;
        case 0x334f78u: goto label_334f78;
        case 0x334f7cu: goto label_334f7c;
        case 0x334f80u: goto label_334f80;
        case 0x334f84u: goto label_334f84;
        case 0x334f88u: goto label_334f88;
        case 0x334f8cu: goto label_334f8c;
        default: break;
    }

    ctx->pc = 0x334f00u;

label_334f00:
    // 0x334f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_334f04:
    // 0x334f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_334f08:
    // 0x334f08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x334f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_334f0c:
    // 0x334f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_334f10:
    // 0x334f10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_334f14:
    // 0x334f14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334f18:
    // 0x334f18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_334f1c:
    // 0x334f1c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x334f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_334f20:
    // 0x334f20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x334f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_334f24:
    // 0x334f24: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x334f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_334f28:
    // 0x334f28: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x334f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_334f2c:
    // 0x334f2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x334f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_334f30:
    // 0x334f30: 0x40f809  jalr        $v0
label_334f34:
    if (ctx->pc == 0x334F34u) {
        ctx->pc = 0x334F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F30u;
        // 0x334f34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F38u;
        goto label_334f38;
    }
    ctx->pc = 0x334F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334F38u);
        ctx->pc = 0x334F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F30u;
        // 0x334f34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334F30u, 0x334F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334F38u;
label_334f38:
    // 0x334f38: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x334f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_334f3c:
    // 0x334f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334f40:
    // 0x334f40: 0x24a54e88  addiu       $a1, $a1, 0x4E88
    ctx->pc = 0x334f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20104));
label_334f44:
    // 0x334f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334f48:
    // 0x334f48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x334f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_334f4c:
    // 0x334f4c: 0xc043c24  jal         func_10F090
label_334f50:
    if (ctx->pc == 0x334F50u) {
        ctx->pc = 0x334F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F4Cu;
        // 0x334f50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F54u;
        goto label_334f54;
    }
    ctx->pc = 0x334F4Cu;
    SET_GPR_U32(ctx, 31, 0x334F54u);
    ctx->pc = 0x334F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F4Cu;
    // 0x334f50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F090u, 0x334F4Cu, 0x334F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F54u;
label_334f54:
    // 0x334f54: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_334f58:
    if (ctx->pc == 0x334F58u) {
        ctx->pc = 0x334F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F54u;
        // 0x334f58: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F5Cu;
        goto label_334f5c;
    }
    ctx->pc = 0x334F54u;
    {
        const bool branch_taken_0x334f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F54u;
        // 0x334f58: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f54) {
            ctx->pc = 0x334F74u;
            goto label_334f74;
        }
    }
    ctx->pc = 0x334F5Cu;
label_334f5c:
    // 0x334f5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x334f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_334f60:
    // 0x334f60: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x334f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_334f64:
    // 0x334f64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x334f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_334f68:
    // 0x334f68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x334f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_334f6c:
    // 0x334f6c: 0x60f809  jalr        $v1
label_334f70:
    if (ctx->pc == 0x334F70u) {
        ctx->pc = 0x334F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F6Cu;
        // 0x334f70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F74u;
        goto label_334f74;
    }
    ctx->pc = 0x334F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x334F74u);
        ctx->pc = 0x334F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F6Cu;
        // 0x334f70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334F6Cu, 0x334F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334F74u;
label_334f74:
    // 0x334f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334f78:
    // 0x334f78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_334f7c:
    // 0x334f7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_334f80:
    // 0x334f80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_334f84:
    // 0x334f84: 0x3e00008  jr          $ra
label_334f88:
    if (ctx->pc == 0x334F88u) {
        ctx->pc = 0x334F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F84u;
        // 0x334f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F8Cu;
        goto label_334f8c;
    }
    ctx->pc = 0x334F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F84u;
        // 0x334f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334F8Cu;
label_334f8c:
    // 0x334f8c: 0x0  nop
    ctx->pc = 0x334f8cu;
    // NOP
    ctx->pc = 0x334f90u;
}
