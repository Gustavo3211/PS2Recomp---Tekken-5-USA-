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

// Function: sub_002F8F48
// Address: 0x2f8f48 - 0x2f90f8
void sub_002F8F48_0x2f8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8F48_0x2f8f48");
#endif

    switch (ctx->pc) {
        case 0x2f8f80u: goto label_2f8f80;
        case 0x2f8fe8u: goto label_2f8fe8;
        case 0x2f9024u: goto label_2f9024;
        case 0x2f9060u: goto label_2f9060;
        case 0x2f90a4u: goto label_2f90a4;
        case 0x2f90ccu: goto label_2f90cc;
        default: break;
    }

    ctx->pc = 0x2f8f48u;

    // 0x2f8f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f8f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f8f50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f8f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f8f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f8f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f8f5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f8f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f8f60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f8f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f8f68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f8f6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f8f70: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2f8f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2f8f74: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2f8f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2f8f78: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2F8F78u;
    SET_GPR_U32(ctx, 31, 0x2F8F80u);
    ctx->pc = 0x2F8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F78u;
    // 0x2f8f7c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2F8F78u, 0x2F8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F80u;
label_2f8f80:
    // 0x2f8f80: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f8f84: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x2f8f84u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x2f8f88: 0x26460140  addiu       $a2, $s2, 0x140
    ctx->pc = 0x2f8f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2f8f8c: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x2f8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x2f8f90: 0x26530148  addiu       $s3, $s2, 0x148
    ctx->pc = 0x2f8f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    // 0x2f8f94: 0x26540150  addiu       $s4, $s2, 0x150
    ctx->pc = 0x2f8f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2f8f98: 0x26550158  addiu       $s5, $s2, 0x158
    ctx->pc = 0x2f8f98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x2f8f9c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2f8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2f8fa0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f8fa4: 0x264300b8  addiu       $v1, $s2, 0xB8
    ctx->pc = 0x2f8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x2f8fa8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f8fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f8facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8fb0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2f8fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8fb8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2f8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2f8fbc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2f8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2f8fc0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2f8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x2f8fc4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2f8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x2f8fc8: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2f8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x2f8fcc: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2f8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x2f8fd0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f8fd4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2f8fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2f8fd8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2f8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2f8fdc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f8fe0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F8FE0u;
    SET_GPR_U32(ctx, 31, 0x2F8FE8u);
    ctx->pc = 0x2F8FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8FE0u;
    // 0x2f8fe4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F8FE0u, 0x2F8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8FE8u;
label_2f8fe8:
    // 0x2f8fe8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f8fec: 0x24450128  addiu       $a1, $v0, 0x128
    ctx->pc = 0x2f8fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x2f8ff0: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x2f8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x2f8ff4: 0x24460130  addiu       $a2, $v0, 0x130
    ctx->pc = 0x2f8ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2f8ff8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2f8ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f8ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9000: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f9004: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f9008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f900c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f900cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f9010: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f9010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f9014: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f9014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f9018: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f901c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F901Cu;
    SET_GPR_U32(ctx, 31, 0x2F9024u);
    ctx->pc = 0x2F9020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F901Cu;
    // 0x2f9020: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F901Cu, 0x2F9024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9024u;
label_2f9024:
    // 0x2f9024: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f9024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f9028: 0x2445015c  addiu       $a1, $v0, 0x15C
    ctx->pc = 0x2f9028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
    // 0x2f902c: 0x24630fd0  addiu       $v1, $v1, 0xFD0
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4048));
    // 0x2f9030: 0x24460164  addiu       $a2, $v0, 0x164
    ctx->pc = 0x2f9030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x2f9034: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f9034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2f9038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f903c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f903cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f9040: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f9044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9048: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f9048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f904c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f904cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f9050: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9050u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2f9054: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9058: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F9058u;
    SET_GPR_U32(ctx, 31, 0x2F9060u);
    ctx->pc = 0x2F905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9058u;
    // 0x2f905c: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F9058u, 0x2F9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9060u;
label_2f9060:
    // 0x2f9060: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f9060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f9064: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x2f9064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x2f9068: 0x24470148  addiu       $a3, $v0, 0x148
    ctx->pc = 0x2f9068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x2f906c: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x2f906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2f9070: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f9070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2f9074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9078: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f907c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2f907cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2f9080: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f9084: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f9084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9088: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2f9088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2f908c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2f908cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2f9090: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2f9090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f9094: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2f9094u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2f9098: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f909c: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2F909Cu;
    SET_GPR_U32(ctx, 31, 0x2F90A4u);
    ctx->pc = 0x2F90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F909Cu;
    // 0x2f90a0: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2F909Cu, 0x2F90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90A4u;
label_2f90a4:
    // 0x2f90a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2f90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2f90a8: 0xae400160  sw          $zero, 0x160($s2)
    ctx->pc = 0x2f90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
    // 0x2f90ac: 0x24631a80  addiu       $v1, $v1, 0x1A80
    ctx->pc = 0x2f90acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f90b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F90B0u;
    {
        const bool branch_taken_0x2f90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90B0u;
        // 0x2f90b4: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90b0) {
            ctx->pc = 0x2F90D0u;
            goto label_2f90d0;
        }
    }
    ctx->pc = 0x2F90B8u;
    // 0x2f90b8: 0x26c2d620  addiu       $v0, $s6, -0x29E0
    ctx->pc = 0x2f90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956576));
    // 0x2f90bc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2f90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2f90c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2f90c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2f90c4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2F90C4u;
    SET_GPR_U32(ctx, 31, 0x2F90CCu);
    ctx->pc = 0x2F90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90C4u;
    // 0x2f90c8: 0x2484071c  addiu       $a0, $a0, 0x71C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2F90C4u, 0x2F90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90CCu;
label_2f90cc:
    // 0x2f90cc: 0x0  nop
    ctx->pc = 0x2f90ccu;
    // NOP
label_2f90d0:
    // 0x2f90d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f90d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f90d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f90d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f90d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f90d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f90dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f90dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f90e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f90e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f90e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f90e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f90e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f90e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f90ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f90ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f90f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F90F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90F0u;
        // 0x2f90f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F90F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F90F8u;
}
