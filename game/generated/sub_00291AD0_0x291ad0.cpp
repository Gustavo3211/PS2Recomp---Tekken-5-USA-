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

// Function: sub_00291AD0
// Address: 0x291ad0 - 0x291c38
void sub_00291AD0_0x291ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291AD0_0x291ad0");
#endif

    switch (ctx->pc) {
        case 0x291afcu: goto label_291afc;
        case 0x291b20u: goto label_291b20;
        case 0x291b34u: goto label_291b34;
        case 0x291b70u: goto label_291b70;
        case 0x291b98u: goto label_291b98;
        case 0x291ba0u: goto label_291ba0;
        case 0x291bd8u: goto label_291bd8;
        case 0x291bf0u: goto label_291bf0;
        case 0x291c08u: goto label_291c08;
        case 0x291c10u: goto label_291c10;
        default: break;
    }

    ctx->pc = 0x291ad0u;

    // 0x291ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291ad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291adc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x291ae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x291ae4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x291ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x291ae8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x291ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x291aec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x291aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x291af0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x291af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x291af4: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x291AF4u;
    SET_GPR_U32(ctx, 31, 0x291AFCu);
    ctx->pc = 0x291AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AF4u;
    // 0x291af8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x291AF4u, 0x291AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AFCu;
label_291afc:
    // 0x291afc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x291afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x291b00: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x291b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x291b04: 0x26350164  addiu       $s5, $s1, 0x164
    ctx->pc = 0x291b04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x291b08: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
    // 0x291b0c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x291b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x291b10: 0x34844100  ori         $a0, $a0, 0x4100
    ctx->pc = 0x291b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16640);
    // 0x291b14: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x291b14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x291b18: 0xc04058e  jal         func_101638
    ctx->pc = 0x291B18u;
    SET_GPR_U32(ctx, 31, 0x291B20u);
    ctx->pc = 0x291B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B18u;
    // 0x291b1c: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101638u, 0x291B18u, 0x291B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B20u;
label_291b20:
    // 0x291b20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x291b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b24: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x291b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b2c: 0xc089636  jal         func_2258D8
    ctx->pc = 0x291B2Cu;
    SET_GPR_U32(ctx, 31, 0x291B34u);
    ctx->pc = 0x291B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B2Cu;
    // 0x291b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x291B2Cu, 0x291B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B34u;
label_291b34:
    // 0x291b34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x291b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x291b38: 0xa2200150  sb          $zero, 0x150($s1)
    ctx->pc = 0x291b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b3c: 0x2442aee8  addiu       $v0, $v0, -0x5118
    ctx->pc = 0x291b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946536));
    // 0x291b40: 0xa2200151  sb          $zero, 0x151($s1)
    ctx->pc = 0x291b40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 337), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b44: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x291b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x291b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b4c: 0xa2200152  sb          $zero, 0x152($s1)
    ctx->pc = 0x291b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 338), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b54: 0xa2200153  sb          $zero, 0x153($s1)
    ctx->pc = 0x291b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 339), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b58: 0xa2200154  sb          $zero, 0x154($s1)
    ctx->pc = 0x291b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 340), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b5c: 0xa2200155  sb          $zero, 0x155($s1)
    ctx->pc = 0x291b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 341), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b60: 0xa2200156  sb          $zero, 0x156($s1)
    ctx->pc = 0x291b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 342), (uint8_t)GPR_U32(ctx, 0));
    // 0x291b64: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x291b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x291b68: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x291B68u;
    SET_GPR_U32(ctx, 31, 0x291B70u);
    ctx->pc = 0x291B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B68u;
    // 0x291b6c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x291B68u, 0x291B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B70u;
label_291b70:
    // 0x291b70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x291b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x291b74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b78: 0x2476aef8  addiu       $s6, $v1, -0x5108
    ctx->pc = 0x291b78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946552));
    // 0x291b7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x291b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x291b80: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291b84: 0x2442e128  addiu       $v0, $v0, -0x1ED8
    ctx->pc = 0x291b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959400));
    // 0x291b88: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x291b8c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x291b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x291b90: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291b94: 0x0  nop
    ctx->pc = 0x291b94u;
    // NOP
label_291b98:
    // 0x291b98: 0xc0ac950  jal         func_2B2540
    ctx->pc = 0x291B98u;
    SET_GPR_U32(ctx, 31, 0x291BA0u);
    ctx->pc = 0x291B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B98u;
    // 0x291b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2540u, 0x291B98u, 0x291BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BA0u;
label_291ba0:
    // 0x291ba0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x291ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x291ba4: 0x1674fffc  bne         $s3, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x291BA4u;
    {
        const bool branch_taken_0x291ba4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x291BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BA4u;
        // 0x291ba8: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ba4) {
            ctx->pc = 0x291B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291b98;
        }
    }
    ctx->pc = 0x291BACu;
    // 0x291bac: 0xae560038  sw          $s6, 0x38($s2)
    ctx->pc = 0x291bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 22));
    // 0x291bb0: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x291bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x291bb4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x291bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x291bb8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x291BB8u;
    {
        const bool branch_taken_0x291bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BB8u;
        // 0x291bbc: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bb8) {
            ctx->pc = 0x291C10u;
            goto label_291c10;
        }
    }
    ctx->pc = 0x291BC0u;
    // 0x291bc0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x291bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x291bc4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x291bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x291bc8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x291bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x291bcc: 0x2484fe14  addiu       $a0, $a0, -0x1EC
    ctx->pc = 0x291bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966804));
    // 0x291bd0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x291BD0u;
    SET_GPR_U32(ctx, 31, 0x291BD8u);
    ctx->pc = 0x291BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BD0u;
    // 0x291bd4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x291BD0u, 0x291BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BD8u;
label_291bd8:
    // 0x291bd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x291bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x291bdc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x291bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x291be0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x291be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x291be4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x291be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291be8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x291BE8u;
    SET_GPR_U32(ctx, 31, 0x291BF0u);
    ctx->pc = 0x291BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BE8u;
    // 0x291bec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x291BE8u, 0x291BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BF0u;
label_291bf0:
    // 0x291bf0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x291bf4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x291bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x291bf8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x291bfc: 0x2484fe24  addiu       $a0, $a0, -0x1DC
    ctx->pc = 0x291bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966820));
    // 0x291c00: 0xc048b90  jal         func_122E40
    ctx->pc = 0x291C00u;
    SET_GPR_U32(ctx, 31, 0x291C08u);
    ctx->pc = 0x291C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C00u;
    // 0x291c04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x291C00u, 0x291C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C08u;
label_291c08:
    // 0x291c08: 0xc049a82  jal         func_126A08
    ctx->pc = 0x291C08u;
    SET_GPR_U32(ctx, 31, 0x291C10u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x291C08u, 0x291C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C10u;
label_291c10:
    // 0x291c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291c18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x291c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x291c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291c20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x291c20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291c24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x291c24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x291c28: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291c2c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x291c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291c30: 0x3e00008  jr          $ra
    ctx->pc = 0x291C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C30u;
        // 0x291c34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291C38u;
}
