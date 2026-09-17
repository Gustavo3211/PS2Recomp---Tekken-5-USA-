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

// Function: sub_00357DE8
// Address: 0x357de8 - 0x357f28
void sub_00357DE8_0x357de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357DE8_0x357de8");
#endif

    switch (ctx->pc) {
        case 0x357e18u: goto label_357e18;
        case 0x357e28u: goto label_357e28;
        case 0x357e48u: goto label_357e48;
        case 0x357ef4u: goto label_357ef4;
        default: break;
    }

    ctx->pc = 0x357de8u;

label_357de8:
    // 0x357de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357dec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x357decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x357df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357df4: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x357df4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x357df8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357dfc: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x357DFCu;
    {
        const bool branch_taken_0x357dfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x357E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DFCu;
        // 0x357e00: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357dfc) {
            ctx->pc = 0x357E40u;
            goto label_357e40;
        }
    }
    ctx->pc = 0x357E04u;
    // 0x357e04: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x357e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x357e08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x357e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e0c: 0x2442e780  addiu       $v0, $v0, -0x1880
    ctx->pc = 0x357e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x357e10: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x357e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x357e14: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x357e14u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x1BE78Cu));
label_357e18:
    // 0x357e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357E18u;
    {
        const bool branch_taken_0x357e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E18u;
        // 0x357e1c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e18) {
            ctx->pc = 0x357E28u;
            goto label_357e28;
        }
    }
    ctx->pc = 0x357E20u;
    // 0x357e20: 0xc0d5f7a  jal         func_357DE8
    ctx->pc = 0x357E20u;
    SET_GPR_U32(ctx, 31, 0x357E28u);
    ctx->pc = 0x357E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E20u;
    // 0x357e24: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x357DE8u;
    goto label_357de8;
    ctx->pc = 0x357E28u;
label_357e28:
    // 0x357e28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x357e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x357e2c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x357e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x357e30: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x357E30u;
    {
        const bool branch_taken_0x357e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357e30) {
            ctx->pc = 0x357E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357E30u;
            // 0x357e34: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357e18;
        }
    }
    ctx->pc = 0x357E38u;
    // 0x357e38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x357E38u;
    {
        const bool branch_taken_0x357e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E38u;
        // 0x357e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e38) {
            ctx->pc = 0x357EA8u;
            goto label_357ea8;
        }
    }
    ctx->pc = 0x357E40u;
label_357e40:
    // 0x357e40: 0xc0d60da  jal         func_358368
    ctx->pc = 0x357E40u;
    SET_GPR_U32(ctx, 31, 0x357E48u);
    ctx->pc = 0x357E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E40u;
    // 0x357e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x357E40u, 0x357E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E48u;
label_357e48:
    // 0x357e48: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x357E48u;
    {
        const bool branch_taken_0x357e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357e48) {
            ctx->pc = 0x357E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357E48u;
            // 0x357e4c: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357E60u;
            goto label_357e60;
        }
    }
    ctx->pc = 0x357E50u;
    // 0x357e50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x357e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x357e54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x357E54u;
    {
        const bool branch_taken_0x357e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E54u;
        // 0x357e58: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e54) {
            ctx->pc = 0x357EA8u;
            goto label_357ea8;
        }
    }
    ctx->pc = 0x357E5Cu;
    // 0x357e5c: 0x0  nop
    ctx->pc = 0x357e5cu;
    // NOP
label_357e60:
    // 0x357e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x357e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357e64: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x357e64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x357e68: 0x24c6e780  addiu       $a2, $a2, -0x1880
    ctx->pc = 0x357e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961024));
    // 0x357e6c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x357e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x357e70: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x357e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x357e74: 0x84c5000a  lh          $a1, 0xA($a2)
    ctx->pc = 0x357e74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x357e78: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x357e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357e7c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x357e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x357e80: 0x94e3000c  lhu         $v1, 0xC($a3)
    ctx->pc = 0x357e80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x357e84: 0xa0c4000c  sb          $a0, 0xC($a2)
    ctx->pc = 0x357e84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x357e88: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x357e88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x357e8c: 0x84e2000e  lh          $v0, 0xE($a3)
    ctx->pc = 0x357e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x357e90: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357E90u;
    {
        const bool branch_taken_0x357e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x357E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E90u;
        // 0x357e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e90) {
            ctx->pc = 0x357EA4u;
            goto label_357ea4;
        }
    }
    ctx->pc = 0x357E98u;
    // 0x357e98: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x357e98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x357e9c: 0x94e3000e  lhu         $v1, 0xE($a3)
    ctx->pc = 0x357e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x357ea0: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x357ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
label_357ea4:
    // 0x357ea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357ea8:
    // 0x357ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x357EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EB4u;
        // 0x357eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357EBCu;
    // 0x357ebc: 0x0  nop
    ctx->pc = 0x357ebcu;
    // NOP
    // 0x357ec0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x357ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x357ec4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357ec8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x357ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x357ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ed0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x357ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x357ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357edc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357ee0: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x357ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x357ee4: 0x2610e780  addiu       $s0, $s0, -0x1880
    ctx->pc = 0x357ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961024));
    // 0x357ee8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x357ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x357eec: 0xc0d60da  jal         func_358368
    ctx->pc = 0x357EECu;
    SET_GPR_U32(ctx, 31, 0x357EF4u);
    ctx->pc = 0x357EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EECu;
    // 0x357ef0: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x357EECu, 0x357EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357EF4u;
label_357ef4:
    // 0x357ef4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x357EF4u;
    {
        const bool branch_taken_0x357ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357ef4) {
            ctx->pc = 0x357EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357EF4u;
            // 0x357ef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357F08u;
            goto label_357f08;
        }
    }
    ctx->pc = 0x357EFCu;
    // 0x357efc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x357efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x357f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357F00u;
    {
        const bool branch_taken_0x357f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F00u;
        // 0x357f04: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f00) {
            ctx->pc = 0x357F14u;
            goto label_357f14;
        }
    }
    ctx->pc = 0x357F08u;
label_357f08:
    // 0x357f08: 0xa611000a  sh          $s1, 0xA($s0)
    ctx->pc = 0x357f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x357f0c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x357f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x357f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357f14:
    // 0x357f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357f20: 0x3e00008  jr          $ra
    ctx->pc = 0x357F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F20u;
        // 0x357f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F28u;
}
