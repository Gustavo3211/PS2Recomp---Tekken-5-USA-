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

// Function: sub_004ADFB8
// Address: 0x4adfb8 - 0x4ae138
void sub_004ADFB8_0x4adfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADFB8_0x4adfb8");
#endif

    switch (ctx->pc) {
        case 0x4ae064u: goto label_4ae064;
        case 0x4ae09cu: goto label_4ae09c;
        case 0x4ae0d0u: goto label_4ae0d0;
        default: break;
    }

    ctx->pc = 0x4adfb8u;

    // 0x4adfb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4adfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4adfbc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4adfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4adfc0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4adfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4adfc4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4adfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4adfc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4adfc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adfcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4adfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4adfd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4adfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adfd4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4adfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4adfd8: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x4adfd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4adfdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4adfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4adfe0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4adfe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adfe4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4adfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4adfe8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x4adfe8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adfec: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4adfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4adff0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4adff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4adff4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x4adff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x4adff8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4adff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4adffc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4adffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4ae000: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4ae000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4ae004: 0x8cbe0000  lw          $fp, 0x0($a1)
    ctx->pc = 0x4ae004u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ae008: 0x8cd70000  lw          $s7, 0x0($a2)
    ctx->pc = 0x4ae008u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ae00c: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x4ae00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x4ae010: 0x37c6ffff  ori         $a2, $fp, 0xFFFF
    ctx->pc = 0x4ae010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4ae014: 0x36e5ffff  ori         $a1, $s7, 0xFFFF
    ctx->pc = 0x4ae014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4ae018: 0x8623002a  lh          $v1, 0x2A($s1)
    ctx->pc = 0x4ae018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x4ae01c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x4ae01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x4ae020: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x4ae020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4ae024: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ae024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ae028: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x4ae028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4ae02c: 0xc3f024  and         $fp, $a2, $v1
    ctx->pc = 0x4ae02cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4ae030: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ae030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ae034: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4ae034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae038: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ae038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ae03c: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4ae03cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ae040: 0xa2b824  and         $s7, $a1, $v0
    ctx->pc = 0x4ae040u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ae044: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4ae044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ae048: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4ae048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4ae04c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4ae04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae050: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4ae050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4ae054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ae054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae058: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x4ae058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x4ae05c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4AE05Cu;
    SET_GPR_U32(ctx, 31, 0x4AE064u);
    ctx->pc = 0x4AE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE05Cu;
    // 0x4ae060: 0x8e950000  lw          $s5, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4AE05Cu, 0x4AE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE064u;
label_4ae064:
    // 0x4ae064: 0x86230022  lh          $v1, 0x22($s1)
    ctx->pc = 0x4ae064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x4ae068: 0x37c5ffff  ori         $a1, $fp, 0xFFFF
    ctx->pc = 0x4ae068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4ae06c: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x4ae06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x4ae070: 0x36e4ffff  ori         $a0, $s7, 0xFFFF
    ctx->pc = 0x4ae070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4ae074: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ae074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ae078: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x4ae078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4ae07c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ae07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ae080: 0xa3f024  and         $fp, $a1, $v1
    ctx->pc = 0x4ae080u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ae084: 0x82b824  and         $s7, $a0, $v0
    ctx->pc = 0x4ae084u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ae088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ae088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae08c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4ae08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae090: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4ae090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae094: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4AE094u;
    SET_GPR_U32(ctx, 31, 0x4AE09Cu);
    ctx->pc = 0x4AE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE094u;
    // 0x4ae098: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4AE094u, 0x4AE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE09Cu;
label_4ae09c:
    // 0x4ae09c: 0x37c7ffff  ori         $a3, $fp, 0xFFFF
    ctx->pc = 0x4ae09cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4ae0a0: 0x86230028  lh          $v1, 0x28($s1)
    ctx->pc = 0x4ae0a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4ae0a4: 0x36e6ffff  ori         $a2, $s7, 0xFFFF
    ctx->pc = 0x4ae0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4ae0a8: 0x86220026  lh          $v0, 0x26($s1)
    ctx->pc = 0x4ae0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x4ae0ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ae0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0b0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ae0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ae0b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ae0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ae0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ae0bc: 0xc3b824  and         $s7, $a2, $v1
    ctx->pc = 0x4ae0bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4ae0c0: 0xe2f024  and         $fp, $a3, $v0
    ctx->pc = 0x4ae0c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ae0c4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4ae0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0c8: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4AE0C8u;
    SET_GPR_U32(ctx, 31, 0x4AE0D0u);
    ctx->pc = 0x4AE0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE0C8u;
    // 0x4ae0cc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4AE0C8u, 0x4AE0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE0D0u;
label_4ae0d0:
    // 0x4ae0d0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4ae0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4ae0d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ae0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae0d8: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x4ae0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x4ae0dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ae0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae0e0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4ae0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae0e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ae0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae0e8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4ae0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ae0ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4ae0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ae0f0: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x4ae0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
    // 0x4ae0f4: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x4ae0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x4ae0f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ae0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae0fc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4ae0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4ae100: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4ae100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ae104: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ae104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ae108: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ae108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ae10c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4ae10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae110: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4ae110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ae114: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4ae114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4ae118: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4ae118u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ae11c: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4ae11cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4ae120: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4ae120u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ae124: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4ae124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ae128: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ae128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ae12c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE12Cu;
        // 0x4ae130: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE134u;
    // 0x4ae134: 0x0  nop
    ctx->pc = 0x4ae134u;
    // NOP
    ctx->pc = 0x4ae138u;
}
