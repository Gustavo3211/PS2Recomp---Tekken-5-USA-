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

// Function: sub_004BFF60
// Address: 0x4bff60 - 0x4c0cb8
void sub_004BFF60_0x4bff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFF60_0x4bff60");
#endif

    switch (ctx->pc) {
        case 0x4bff64u: goto label_4bff64;
        case 0x4bff78u: goto label_4bff78;
        case 0x4bff8cu: goto label_4bff8c;
        case 0x4bffd0u: goto label_4bffd0;
        case 0x4c013cu: goto label_4c013c;
        case 0x4c0174u: goto label_4c0174;
        case 0x4c020cu: goto label_4c020c;
        case 0x4c0248u: goto label_4c0248;
        case 0x4c02ccu: goto label_4c02cc;
        case 0x4c033cu: goto label_4c033c;
        case 0x4c03e0u: goto label_4c03e0;
        case 0x4c0470u: goto label_4c0470;
        case 0x4c0610u: goto label_4c0610;
        case 0x4c06e0u: goto label_4c06e0;
        case 0x4c0714u: goto label_4c0714;
        case 0x4c0724u: goto label_4c0724;
        case 0x4c0798u: goto label_4c0798;
        case 0x4c07a0u: goto label_4c07a0;
        case 0x4c08dcu: goto label_4c08dc;
        case 0x4c0ae4u: goto label_4c0ae4;
        case 0x4c0b4cu: goto label_4c0b4c;
        case 0x4c0b9cu: goto label_4c0b9c;
        case 0x4c0c18u: goto label_4c0c18;
        case 0x4c0c2cu: goto label_4c0c2c;
        case 0x4c0c58u: goto label_4c0c58;
        case 0x4c0c60u: goto label_4c0c60;
        case 0x4c0c68u: goto label_4c0c68;
        case 0x4c0c70u: goto label_4c0c70;
        case 0x4c0c80u: goto label_4c0c80;
        case 0x4c0c98u: goto label_4c0c98;
        case 0x4c0ca0u: goto label_4c0ca0;
        default: break;
    }

    ctx->pc = 0x4bff60u;

    // 0x4bff60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bff60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bff64:
    // 0x4bff64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bff64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bff68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bff6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF6Cu;
        // 0x4bff70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BFF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BFF74u;
    // 0x4bff74: 0x0  nop
    ctx->pc = 0x4bff74u;
    // NOP
label_4bff78:
    // 0x4bff78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bff78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bff7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bff80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bff84: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4BFF84u;
    SET_GPR_U32(ctx, 31, 0x4BFF8Cu);
    ctx->pc = 0x4BFF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFF84u;
    // 0x4bff88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4BFF84u, 0x4BFF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFF8Cu;
label_4bff8c:
    // 0x4bff8c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x4bff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4bff90: 0x2406045e  addiu       $a2, $zero, 0x45E
    ctx->pc = 0x4bff90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1118));
    // 0x4bff94: 0x240304b4  addiu       $v1, $zero, 0x4B4
    ctx->pc = 0x4bff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x4bff98: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x4bff98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4bff9c: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4bff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4bffa0: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4bffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4bffa4: 0xa4430160  sh          $v1, 0x160($v0)
    ctx->pc = 0x4bffa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bffa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bffac: 0xa446015e  sh          $a2, 0x15E($v0)
    ctx->pc = 0x4bffacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 6));
    // 0x4bffb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bffb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bffb4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bffb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bffb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bffb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bffbc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bffc0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4bffc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bffc4: 0x812fff4  j           func_4BFFD0
    ctx->pc = 0x4BFFC4u;
    ctx->pc = 0x4BFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFFC4u;
    // 0x4bffc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFFD0u;
    goto label_4bffd0;
    ctx->pc = 0x4BFFCCu;
    // 0x4bffcc: 0x0  nop
    ctx->pc = 0x4bffccu;
    // NOP
label_4bffd0:
    // 0x4bffd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bffd4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bffd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bffdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bffdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bffe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bffe4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4bffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4bffe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bffec: 0x26130162  addiu       $s3, $s0, 0x162
    ctx->pc = 0x4bffecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
    // 0x4bfff0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bfff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bfff4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bfff8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bfff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bfffc: 0x24750e88  addiu       $s5, $v1, 0xE88
    ctx->pc = 0x4bfffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3720));
    // 0x4c0000: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c0000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c0004: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c0004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c0008: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c0008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c000c: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4c000cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4c0010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c0010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c0014: 0x27d40e8c  addiu       $s4, $fp, 0xE8C
    ctx->pc = 0x4c0014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 3724));
    // 0x4c0018: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c0018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c001c: 0x248b0e90  addiu       $t3, $a0, 0xE90
    ctx->pc = 0x4c001cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3728));
    // 0x4c0020: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c0020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c0024: 0x8c4a0e94  lw          $t2, 0xE94($v0)
    ctx->pc = 0x4c0024u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0E94u));
    // 0x4c0028: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c0028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c002c: 0x24570e84  addiu       $s7, $v0, 0xE84
    ctx->pc = 0x4c002cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x4c0030: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4c0030u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E88u));
    // 0x4c0034: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4c0034u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E84u));
    // 0x4c0038: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4c0038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4c003c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c003cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c0040: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c0040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c0044: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c0048: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c0048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c004c: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4c004cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4c0050: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c0050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c0054: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4c0054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4c0058: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4c0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c005c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c0060: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x4c0060u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0064: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c0064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c0068: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c006c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c0070: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c0070u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c0074: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4c0074u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4c0078: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c0078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c007c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4c007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4c0080: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4c0080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c0084: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c0088: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4c0088u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c008c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c008cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c0090: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c0090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c0094: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c0094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c0098: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c009c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c009cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c00a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c00a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c00a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4c00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4c00a8: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4c00a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c00ac: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c00acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c00b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c00b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c00b4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c00b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c00b8: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4c00b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4c00bc: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4c00bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4c00c0: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4c00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4c00c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c00c8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c00cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c00ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c00d0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4c00d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c00d4: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4c00d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4c00d8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4c00d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4c00dc: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4c00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4c00e0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4c00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c00e4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c00e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c00e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c00e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c00ec: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c00f0: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4c00f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4c00f4: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x4c00f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c00f8: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c00fc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4c00fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c0100: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c0100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c0104: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4c0104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4c0108: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x4c0108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x4c010c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x4C010Cu;
    {
        const bool branch_taken_0x4c010c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C010Cu;
        // 0x4c0110: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c010c) {
            ctx->pc = 0x4C01B8u;
            goto label_4c01b8;
        }
    }
    ctx->pc = 0x4C0114u;
    // 0x4c0114: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c0114u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c0118: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c011c: 0x26d10e7c  addiu       $s1, $s6, 0xE7C
    ctx->pc = 0x4c011cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 3708));
    // 0x4c0120: 0x34630bb8  ori         $v1, $v1, 0xBB8
    ctx->pc = 0x4c0120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3000);
    // 0x4c0124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c0124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E7Cu));
    // 0x4c0128: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c0128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c012c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c0130: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c0130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c0134: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C0134u;
    SET_GPR_U32(ctx, 31, 0x4C013Cu);
    ctx->pc = 0x4C0138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0134u;
    // 0x4c0138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C0134u, 0x4C013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C013Cu;
label_4c013c:
    // 0x4c013c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4C013Cu;
    {
        const bool branch_taken_0x4c013c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C013Cu;
        // 0x4c0140: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c013c) {
            ctx->pc = 0x4C01C0u;
            goto label_4c01c0;
        }
    }
    ctx->pc = 0x4C0144u;
    // 0x4c0144: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c0144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c0148: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c014c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4c014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4c0150: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4c0150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0154: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c0158: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c015c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c015cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0160: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4c0160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c0164: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4c0164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c0168: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4c0168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c016c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C016Cu;
    SET_GPR_U32(ctx, 31, 0x4C0174u);
    ctx->pc = 0x4C0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C016Cu;
    // 0x4c0170: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C016Cu, 0x4C0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0174u;
label_4c0174:
    // 0x4c0174: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4C0174u;
    {
        const bool branch_taken_0x4c0174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c0174) {
            ctx->pc = 0x4C0178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0174u;
            // 0x4c0178: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C01B0u;
            goto label_4c01b0;
        }
    }
    ctx->pc = 0x4C017Cu;
    // 0x4c017c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c0180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c0184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c0188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c018c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c018cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c0190: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c0190u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c0194: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c0194u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c0198: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c0198u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c019c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c019cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c01a0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c01a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c01a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c01a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c01a8: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C01A8u;
    ctx->pc = 0x4C01ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C01A8u;
    // 0x4c01ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C01B0u;
label_4c01b0:
    // 0x4c01b0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x4C01B0u;
    {
        const bool branch_taken_0x4c01b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01B0u;
        // 0x4c01b4: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01b0) {
            ctx->pc = 0x4C037Cu;
            goto label_4c037c;
        }
    }
    ctx->pc = 0x4C01B8u;
label_4c01b8:
    // 0x4c01b8: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c01b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c01bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4c01c0:
    // 0x4c01c0: 0x8c620e90  lw          $v0, 0xE90($v1)
    ctx->pc = 0x4c01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3728)));
    // 0x4c01c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4c01c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4c01c8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4C01C8u;
    {
        const bool branch_taken_0x4c01c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01C8u;
        // 0x4c01cc: 0x26d10e7c  addiu       $s1, $s6, 0xE7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 3708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01c8) {
            ctx->pc = 0x4C0290u;
            goto label_4c0290;
        }
    }
    ctx->pc = 0x4C01D0u;
    // 0x4c01d0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c01d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c01d8: 0x24920e84  addiu       $s2, $a0, 0xE84
    ctx->pc = 0x4c01d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x4c01dc: 0x2403f830  addiu       $v1, $zero, -0x7D0
    ctx->pc = 0x4c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965296));
    // 0x4c01e0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c01e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c01e8: 0x24940e88  addiu       $s4, $a0, 0xE88
    ctx->pc = 0x4c01e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 3720));
    // 0x4c01ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c01ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c01f0: 0x27d50e8c  addiu       $s5, $fp, 0xE8C
    ctx->pc = 0x4c01f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3724));
    // 0x4c01f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c01f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c01f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c01fc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4c01fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c0200: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4c0200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c0204: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C0204u;
    SET_GPR_U32(ctx, 31, 0x4C020Cu);
    ctx->pc = 0x4C0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0204u;
    // 0x4c0208: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C0204u, 0x4C020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C020Cu;
label_4c020c:
    // 0x4c020c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x4C020Cu;
    {
        const bool branch_taken_0x4c020c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c020c) {
            ctx->pc = 0x4C0210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C020Cu;
            // 0x4c0210: 0x26d10e7c  addiu       $s1, $s6, 0xE7C (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 3708));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0290u;
            goto label_4c0290;
        }
    }
    ctx->pc = 0x4C0214u;
    // 0x4c0214: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c0214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c0218: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c0218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c021c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c0220: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4c0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4c0224: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c0224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c0228: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c0228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c022c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c022cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0230: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0234: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4c0234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c0238: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4c0238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c023c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4c023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0240: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C0240u;
    SET_GPR_U32(ctx, 31, 0x4C0248u);
    ctx->pc = 0x4C0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0240u;
    // 0x4c0244: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C0240u, 0x4C0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0248u;
label_4c0248:
    // 0x4c0248: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4C0248u;
    {
        const bool branch_taken_0x4c0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c0248) {
            ctx->pc = 0x4C024Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0248u;
            // 0x4c024c: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0288u;
            goto label_4c0288;
        }
    }
    ctx->pc = 0x4C0250u;
    // 0x4c0250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c0254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c0258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c025c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c025cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c0260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c0260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c0264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c0264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c0268: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c0268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c026c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c026cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c0270: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c0270u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c0274: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c0274u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c0278: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c0278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c027c: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C027Cu;
    ctx->pc = 0x4C0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C027Cu;
    // 0x4c0280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C0284u;
    // 0x4c0284: 0x0  nop
    ctx->pc = 0x4c0284u;
    // NOP
label_4c0288:
    // 0x4c0288: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x4C0288u;
    {
        const bool branch_taken_0x4c0288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0288u;
        // 0x4c028c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0288) {
            ctx->pc = 0x4C037Cu;
            goto label_4c037c;
        }
    }
    ctx->pc = 0x4C0290u;
label_4c0290:
    // 0x4c0290: 0x27d60e8c  addiu       $s6, $fp, 0xE8C
    ctx->pc = 0x4c0290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 3724));
    // 0x4c0294: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c0294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c0298: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c0298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c029c: 0x24540e84  addiu       $s4, $v0, 0xE84
    ctx->pc = 0x4c029cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x4c02a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c02a4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c02a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c02a8: 0x24750e88  addiu       $s5, $v1, 0xE88
    ctx->pc = 0x4c02a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3720));
    // 0x4c02ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c02acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c02b0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E84u));
    // 0x4c02b4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c02b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c02b8: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4c02b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c02bc: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4c02bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c02c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c02c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c02c4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C02C4u;
    SET_GPR_U32(ctx, 31, 0x4C02CCu);
    ctx->pc = 0x4C02C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C02C4u;
    // 0x4c02c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C02C4u, 0x4C02CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C02CCu;
label_4c02cc:
    // 0x4c02cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c02d0: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4C02D0u;
    {
        const bool branch_taken_0x4c02d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c02d0) {
            ctx->pc = 0x4C02D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C02D0u;
            // 0x4c02d4: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0310u;
            goto label_4c0310;
        }
    }
    ctx->pc = 0x4C02D8u;
    // 0x4c02d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c02dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c02dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c02e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c02e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c02e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c02e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c02e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c02e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c02ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c02ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c02f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c02f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c02f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c02f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c02f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c02f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c02fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c02fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c0300: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c0300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c0304: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C0304u;
    ctx->pc = 0x4C0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0304u;
    // 0x4c0308: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C030Cu;
    // 0x4c030c: 0x0  nop
    ctx->pc = 0x4c030cu;
    // NOP
label_4c0310:
    // 0x4c0310: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c0310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c0314: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4c0314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4c0318: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c0318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c031c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c0320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0324: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0328: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4c0328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c032c: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4c032cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0330: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4c0330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0334: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C0334u;
    SET_GPR_U32(ctx, 31, 0x4C033Cu);
    ctx->pc = 0x4C0338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0334u;
    // 0x4c0338: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C0334u, 0x4C033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C033Cu;
label_4c033c:
    // 0x4c033c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4C033Cu;
    {
        const bool branch_taken_0x4c033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c033c) {
            ctx->pc = 0x4C0340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C033Cu;
            // 0x4c0340: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0378u;
            goto label_4c0378;
        }
    }
    ctx->pc = 0x4C0344u;
    // 0x4c0344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c0348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c034c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c0350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c0354: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c0354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c0358: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c0358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c035c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c035cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c0360: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c0360u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c0364: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c0364u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c0368: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c0368u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c036c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c0370: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C0370u;
    ctx->pc = 0x4C0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0370u;
    // 0x4c0374: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C0378u;
label_4c0378:
    // 0x4c0378: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4c0378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4c037c:
    // 0x4c037c: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4c037cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0380: 0xa600014a  sh          $zero, 0x14A($s0)
    ctx->pc = 0x4c0380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c0384: 0x260301b8  addiu       $v1, $s0, 0x1B8
    ctx->pc = 0x4c0384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
    // 0x4c0388: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c0388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c038c: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4c038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c0390: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c0390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c0394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c0398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c039c: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4c039cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c03a0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x4c03a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c03a4: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4c03a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c03a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c03a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c03ac: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c03acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c03b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c03b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c03b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c03b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c03b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c03bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c03bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c03c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c03c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c03c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c03c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c03c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c03c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c03cc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c03ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c03d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c03d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c03d4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4c03d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c03d8: 0x81300f8  j           func_4C03E0
    ctx->pc = 0x4C03D8u;
    ctx->pc = 0x4C03DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C03D8u;
    // 0x4c03dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C03E0u;
    goto label_4c03e0;
    ctx->pc = 0x4C03E0u;
label_4c03e0:
    // 0x4c03e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c03e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c03e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c03e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c03e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c03ec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c03ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c03f0: 0x24a50e78  addiu       $a1, $a1, 0xE78
    ctx->pc = 0x4c03f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3704));
    // 0x4c03f4: 0x24c8016a  addiu       $t0, $a2, 0x16A
    ctx->pc = 0x4c03f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 362));
    // 0x4c03f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E78u));
    // 0x4c03fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c03fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0400: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c0400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c0404: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0408: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c0408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c040c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c040cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0410: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c0410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c0414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0418: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c0418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c041c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4c041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4c0420: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c0424: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0428: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c0428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c042c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x4c042cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c0430: 0x2ca20400  sltiu       $v0, $a1, 0x400
    ctx->pc = 0x4c0430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4c0434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C0434u;
    {
        const bool branch_taken_0x4c0434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0434u;
        // 0x4c0438: 0x24c601bc  addiu       $a2, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0434) {
            ctx->pc = 0x4C0450u;
            goto label_4c0450;
        }
    }
    ctx->pc = 0x4C043Cu;
    // 0x4c043c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0440: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x4c0440u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c0444: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C0444u;
    ctx->pc = 0x4C0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0444u;
    // 0x4c0448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C044Cu;
    // 0x4c044c: 0x0  nop
    ctx->pc = 0x4c044cu;
    // NOP
label_4c0450:
    // 0x4c0450: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x4c0450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4c0454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c0454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0458: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4c0458u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c045c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c045cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c0460: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c0464: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4c0464u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0468: 0x813011c  j           func_4C0470
    ctx->pc = 0x4C0468u;
    ctx->pc = 0x4C046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0468u;
    // 0x4c046c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C0470u;
    goto label_4c0470;
    ctx->pc = 0x4C0470u;
label_4c0470:
    // 0x4c0470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c0474: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c0474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c0478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c047c: 0x250a014a  addiu       $t2, $t0, 0x14A
    ctx->pc = 0x4c047cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 330));
    // 0x4c0480: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c0480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c0484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c0488: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4c0488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c048c: 0x2c630050  sltiu       $v1, $v1, 0x50
    ctx->pc = 0x4c048cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x4c0490: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C0490u;
    {
        const bool branch_taken_0x4c0490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0490u;
        // 0x4c0494: 0xa5420000  sh          $v0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0490) {
            ctx->pc = 0x4C04A8u;
            goto label_4c04a8;
        }
    }
    ctx->pc = 0x4C0498u;
    // 0x4c0498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c0498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c049c: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C049Cu;
    ctx->pc = 0x4C04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C049Cu;
    // 0x4c04a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C04A4u;
    // 0x4c04a4: 0x0  nop
    ctx->pc = 0x4c04a4u;
    // NOP
label_4c04a8:
    // 0x4c04a8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c04a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c04ac: 0x85020168  lh          $v0, 0x168($t0)
    ctx->pc = 0x4c04acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 360)));
    // 0x4c04b0: 0x24e40e78  addiu       $a0, $a3, 0xE78
    ctx->pc = 0x4c04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3704));
    // 0x4c04b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c04b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c04b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E78u));
    // 0x4c04bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c04bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c04c0: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c04c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c04c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c04c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c04c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c04c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c04cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c04d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c04d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c04d4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c04d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c04d8: 0x24423c00  addiu       $v0, $v0, 0x3C00
    ctx->pc = 0x4c04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15360));
    // 0x4c04dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c04dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c04e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c04e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c04e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c04e8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c04e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c04ec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C04ECu;
    {
        const bool branch_taken_0x4c04ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04ECu;
        // 0x4c04f0: 0x25890e7c  addiu       $t1, $t4, 0xE7C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 3708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04ec) {
            ctx->pc = 0x4C0500u;
            goto label_4c0500;
        }
    }
    ctx->pc = 0x4C04F4u;
    // 0x4c04f4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c04f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C04F8u;
    {
        const bool branch_taken_0x4c04f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04F8u;
        // 0x4c04fc: 0x344600ff  ori         $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04f8) {
            ctx->pc = 0x4C0514u;
            goto label_4c0514;
        }
    }
    ctx->pc = 0x4C0500u;
label_4c0500:
    // 0x4c0500: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4c0500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c0504: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c0508: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4c0508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c050c: 0x24e40e78  addiu       $a0, $a3, 0xE78
    ctx->pc = 0x4c050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3704));
    // 0x4c0510: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c0510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4c0514:
    // 0x4c0514: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c0514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c0518: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c0518u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c051c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c0520: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4c0520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4c0524: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4c0524u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4c0528: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c0528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c052c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0534: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c0534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c0538: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c0538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c053c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C053Cu;
    {
        const bool branch_taken_0x4c053c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C053Cu;
        // 0x4c0540: 0x25670e80  addiu       $a3, $t3, 0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 3712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c053c) {
            ctx->pc = 0x4C0550u;
            goto label_4c0550;
        }
    }
    ctx->pc = 0x4C0544u;
    // 0x4c0544: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c0544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c0548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C0548u;
    {
        const bool branch_taken_0x4c0548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0548u;
        // 0x4c054c: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0548) {
            ctx->pc = 0x4C055Cu;
            goto label_4c055c;
        }
    }
    ctx->pc = 0x4C0550u;
label_4c0550:
    // 0x4c0550: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c0550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c0554: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c0554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c0558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c0558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c055c:
    // 0x4c055c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c055cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4c0560: 0x25650e80  addiu       $a1, $t3, 0xE80
    ctx->pc = 0x4c0560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 3712));
    // 0x4c0564: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4c0564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c0568: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c0568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c056c: 0x8d830e7c  lw          $v1, 0xE7C($t4)
    ctx->pc = 0x4c056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 3708)));
    // 0x4c0570: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4c0570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c0574: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c0574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c0578: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4c0578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c057c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c0580: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4c0580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c0584: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C0584u;
    {
        const bool branch_taken_0x4c0584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0584u;
        // 0x4c0588: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0584) {
            ctx->pc = 0x4C05A0u;
            goto label_4c05a0;
        }
    }
    ctx->pc = 0x4C058Cu;
    // 0x4c058c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c058cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0590: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4c0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0594: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C0594u;
    ctx->pc = 0x4C0598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0594u;
    // 0x4c0598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C059Cu;
    // 0x4c059c: 0x0  nop
    ctx->pc = 0x4c059cu;
    // NOP
label_4c05a0:
    // 0x4c05a0: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x4c05a0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c05a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4c05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4c05a8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4c05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4c05ac: 0x250701bc  addiu       $a3, $t0, 0x1BC
    ctx->pc = 0x4c05acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4c05b0: 0x850601ba  lh          $a2, 0x1BA($t0)
    ctx->pc = 0x4c05b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 442)));
    // 0x4c05b4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4c05b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c05b8: 0x95030164  lhu         $v1, 0x164($t0)
    ctx->pc = 0x4c05b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 356)));
    // 0x4c05bc: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x4c05bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4c05c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c05c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c05c4: 0xa50301b8  sh          $v1, 0x1B8($t0)
    ctx->pc = 0x4c05c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 440), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c05c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c05cc: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x4c05ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x4c05d0: 0x8ca2f988  lw          $v0, -0x678($a1)
    ctx->pc = 0x4c05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965640)));
    // 0x4c05d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c05d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4c05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c05dc: 0x3012  mflo        $a2
    ctx->pc = 0x4c05dcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4c05e0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4c05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4c05e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4c05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4c05e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c05ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4c05ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c05f0: 0x94a3fffe  lhu         $v1, -0x2($a1)
    ctx->pc = 0x4c05f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x4c05f4: 0xa503015c  sh          $v1, 0x15C($t0)
    ctx->pc = 0x4c05f4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 348), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c05f8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c05f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c05fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c0600: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4c0600u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0604: 0x8130184  j           func_4C0610
    ctx->pc = 0x4C0604u;
    ctx->pc = 0x4C0608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0604u;
    // 0x4c0608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C0610u;
    goto label_4c0610;
    ctx->pc = 0x4C060Cu;
    // 0x4c060c: 0x0  nop
    ctx->pc = 0x4c060cu;
    // NOP
label_4c0610:
    // 0x4c0610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c0614: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c0618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c0618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c061c: 0x24470e78  addiu       $a3, $v0, 0xE78
    ctx->pc = 0x4c061cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3704));
    // 0x4c0620: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c0620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0624: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c0624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0628: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c0628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E78u));
    // 0x4c062c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4c062cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x4c0630: 0x2505016a  addiu       $a1, $t0, 0x16A
    ctx->pc = 0x4c0630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 362));
    // 0x4c0634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c0638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c0638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c063c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c063cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4c0640: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4c0640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c0644: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c0648: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x4c0648u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c064c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4c064cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4c0650: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C0650u;
    {
        const bool branch_taken_0x4c0650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0650) {
            ctx->pc = 0x4C0654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0650u;
            // 0x4c0654: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0668u;
            goto label_4c0668;
        }
    }
    ctx->pc = 0x4C0658u;
    // 0x4c0658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c0658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c065c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x4c065cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c0660: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C0660u;
    ctx->pc = 0x4C0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0660u;
    // 0x4c0664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C0668u;
label_4c0668:
    // 0x4c0668: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c0668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c066c: 0x95030168  lhu         $v1, 0x168($t0)
    ctx->pc = 0x4c066cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 360)));
    // 0x4c0670: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c0670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4c0674: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C0674u;
    {
        const bool branch_taken_0x4c0674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0674) {
            ctx->pc = 0x4C0678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0674u;
            // 0x4c0678: 0xa4a00000  sh          $zero, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0688u;
            goto label_4c0688;
        }
    }
    ctx->pc = 0x4C067Cu;
    // 0x4c067c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0680: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C0680u;
    ctx->pc = 0x4C0684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0680u;
    // 0x4c0684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C0688u;
label_4c0688:
    // 0x4c0688: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c0688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c068c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4c068cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4c0690: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c0690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c0694: 0x85020162  lh          $v0, 0x162($t0)
    ctx->pc = 0x4c0694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 354)));
    // 0x4c0698: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c069c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c06a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c06a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c06a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4c06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4c06a8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4c06a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c06ac: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C06ACu;
    {
        const bool branch_taken_0x4c06ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4C06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06ACu;
        // 0x4c06b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c06ac) {
            ctx->pc = 0x4C06C8u;
            goto label_4c06c8;
        }
    }
    ctx->pc = 0x4C06B4u;
    // 0x4c06b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c06b8: 0xa50201bc  sh          $v0, 0x1BC($t0)
    ctx->pc = 0x4c06b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c06bc: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C06BCu;
    ctx->pc = 0x4C06C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C06BCu;
    // 0x4c06c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C06C4u;
    // 0x4c06c4: 0x0  nop
    ctx->pc = 0x4c06c4u;
    // NOP
label_4c06c8:
    // 0x4c06c8: 0x250301bc  addiu       $v1, $t0, 0x1BC
    ctx->pc = 0x4c06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4c06cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c06ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c06d0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c06d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c06d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c06d8: 0x81301b8  j           func_4C06E0
    ctx->pc = 0x4C06D8u;
    ctx->pc = 0x4C06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C06D8u;
    // 0x4c06dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C06E0u;
    goto label_4c06e0;
    ctx->pc = 0x4C06E0u;
label_4c06e0:
    // 0x4c06e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4c06e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4c06e4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4c06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4c06e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4c06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4c06ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4c06ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4c06f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4c06f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4c06f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4c06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4c06f8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4c06f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4c06fc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4c06fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4c0700: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4c0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4c0704: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4c0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4c0708: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4c0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4c070c: 0xc12564a  jal         func_495928
    ctx->pc = 0x4C070Cu;
    SET_GPR_U32(ctx, 31, 0x4C0714u);
    ctx->pc = 0x4C0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C070Cu;
    // 0x4c0710: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4C070Cu, 0x4C0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0714u;
label_4c0714:
    // 0x4c0714: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x4C0714u;
    {
        const bool branch_taken_0x4c0714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0714u;
        // 0x4c0718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0714) {
            ctx->pc = 0x4C0BD0u;
            goto label_4c0bd0;
        }
    }
    ctx->pc = 0x4C071Cu;
    // 0x4c071c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C071Cu;
    SET_GPR_U32(ctx, 31, 0x4C0724u);
    ctx->pc = 0x4C0720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C071Cu;
    // 0x4c0720: 0x3c14ffff  lui         $s4, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C071Cu, 0x4C0724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0724u;
label_4c0724:
    // 0x4c0724: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c0724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0728: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c0728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c072c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c072cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c0730: 0x24570e8c  addiu       $s7, $v0, 0xE8C
    ctx->pc = 0x4c0730u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 3724));
    // 0x4c0734: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c0738: 0x24560e84  addiu       $s6, $v0, 0xE84
    ctx->pc = 0x4c0738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x4c073c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0740: 0x247e0e88  addiu       $fp, $v1, 0xE88
    ctx->pc = 0x4c0740u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 3720));
    // 0x4c0744: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4c0744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E84u));
    // 0x4c0748: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x4c0748u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0E88u));
    // 0x4c074c: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4c074cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x4c0750: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4c0750u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0E8Cu));
    // 0x4c0754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0758: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c0758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c075c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c0760: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4c0760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4c0764: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4c0764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4c0768: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c0768u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c076c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c076cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c0770: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4c0770u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4c0774: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4c0774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0778: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x4c0778u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x4c077c: 0x26680166  addiu       $t0, $s3, 0x166
    ctx->pc = 0x4c077cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4c0780: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4c0780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4c0784: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4c0784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0788: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x4c0788u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    // 0x4c078c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4c078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0790: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4C0790u;
    SET_GPR_U32(ctx, 31, 0x4C0798u);
    ctx->pc = 0x4C0794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0790u;
    // 0x4c0794: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4C0790u, 0x4C0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0798u;
label_4c0798:
    // 0x4c0798: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C0798u;
    SET_GPR_U32(ctx, 31, 0x4C07A0u);
    ctx->pc = 0x4C079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0798u;
    // 0x4c079c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C0798u, 0x4C07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C07A0u;
label_4c07a0:
    // 0x4c07a0: 0x26650168  addiu       $a1, $s3, 0x168
    ctx->pc = 0x4c07a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 360));
    // 0x4c07a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4c07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c07a8: 0x26670120  addiu       $a3, $s3, 0x120
    ctx->pc = 0x4c07a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4c07ac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4c07acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c07b0: 0x26680118  addiu       $t0, $s3, 0x118
    ctx->pc = 0x4c07b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x4c07b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c07b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c07b8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c07bc: 0x24750e78  addiu       $s5, $v1, 0xE78
    ctx->pc = 0x4c07bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3704));
    // 0x4c07c0: 0x266a011c  addiu       $t2, $s3, 0x11C
    ctx->pc = 0x4c07c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x4c07c4: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x4c07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x4c07c8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c07c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c07cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c07ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c07d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4c07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4c07d4: 0x8662016a  lh          $v0, 0x16A($s3)
    ctx->pc = 0x4c07d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 362)));
    // 0x4c07d8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4c07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4c07dc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c07dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c07e0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4c07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E78u));
    // 0x4c07e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c07e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c07e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c07e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c07ec: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4c07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4c07f0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c07f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c07f4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4c07f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c07f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c07fc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c07fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0800: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4c0800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c0804: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4c0804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0808: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4c0808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4c080c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x4c080cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c0810: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c0810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c0814: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x4c0814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0818: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c0818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c081c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c081cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c0820: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4c0820u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4c0824: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c0824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c0828: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c0828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c082c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c082cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c0830: 0x86d10000  lh          $s1, 0x0($s6)
    ctx->pc = 0x4c0830u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0834: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0838: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c0838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c083c: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x4c083cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x4c0840: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c0840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c0844: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4c0844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0848: 0x87d20000  lh          $s2, 0x0($fp)
    ctx->pc = 0x4c0848u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c084c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c084cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c0850: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0854: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c0854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c0858: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4c0858u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x4c085c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c085cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c0860: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4c0860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0864: 0x86f00000  lh          $s0, 0x0($s7)
    ctx->pc = 0x4c0864u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0868: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c0868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c086c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4c086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4c0870: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x4c0870u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x4c0874: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0878: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c0878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c087c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4c087cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4c0880: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4c0880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4c0884: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4c0884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0888: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c0888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c088c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4c088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4c0890: 0x2549025  or          $s2, $s2, $s4
    ctx->pc = 0x4c0890u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 20));
    // 0x4c0894: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0898: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c0898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c089c: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x4c089cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x4c08a0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c08a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c08a4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4c08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4c08a8: 0x2148025  or          $s0, $s0, $s4
    ctx->pc = 0x4c08a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
    // 0x4c08ac: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c08acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c08b0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c08b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c08b4: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4c08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x4c08b8: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4c08b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c08bc: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4c08bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c08c0: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4c08c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c08c4: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4c08c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c08c8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4c08c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c08cc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4c08ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c08d0: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x4c08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x4c08d4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C08D4u;
    SET_GPR_U32(ctx, 31, 0x4C08DCu);
    ctx->pc = 0x4C08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C08D4u;
    // 0x4c08d8: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C08D4u, 0x4C08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C08DCu;
label_4c08dc:
    // 0x4c08dc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4c08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c08e0: 0x2666014a  addiu       $a2, $s3, 0x14A
    ctx->pc = 0x4c08e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 330));
    // 0x4c08e4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4c08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c08e8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4c08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c08ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c08ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c08f0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c08f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c08f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c08f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c08f8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4c08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4c08fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c08fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0900: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x4c0900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4c0904: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4c0904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4c0908: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x4c0908u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c090c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4c090cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x4c0910: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4c0910u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4c0914: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x4c0914u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c0918: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x4c0918u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c091c: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4c091cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c0920: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x4c0920u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c0924: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4c0924u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0928: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4c0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c092c: 0x96e40000  lhu         $a0, 0x0($s7)
    ctx->pc = 0x4c092cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0930: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4c0930u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c0934: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4c0934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c0938: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c0938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c093c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0940: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0944: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0948: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4c0948u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4c094c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c094cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0950: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4c0950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c0954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c0954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4c0958: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c095c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c095cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0960: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4c0960u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4c0964: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4c0964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c0968: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x4C0968u;
    {
        const bool branch_taken_0x4c0968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0968u;
        // 0x4c096c: 0x26690160  addiu       $t1, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0968) {
            ctx->pc = 0x4C0B4Cu;
            goto label_4c0b4c;
        }
    }
    ctx->pc = 0x4C0970u;
    // 0x4c0970: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4c0970u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4c0974: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c0974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c0978: 0x2651d680  addiu       $s1, $s2, -0x2980
    ctx->pc = 0x4c0978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4c097c: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4c097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4c0980: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c0980u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0984: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x4c0984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4c0988: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4c0988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c098c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4c098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4c0990: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c0990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c0994: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c0994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c0998: 0xa6232334  sh          $v1, 0x2334($s1)
    ctx->pc = 0x4c0998u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9012), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c099c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4c099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4c09a0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4c09a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4c09a4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4c09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4c09a8: 0xa6222336  sh          $v0, 0x2336($s1)
    ctx->pc = 0x4c09a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c09ac: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x4c09acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4c09b0: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4c09b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4c09b4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c09b8: 0xa6232338  sh          $v1, 0x2338($s1)
    ctx->pc = 0x4c09b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c09bc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c09bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c09c0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c09c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c09c4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c09c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c09c8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4c09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4c09cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c09ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c09d0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4c09d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c09d4: 0x3042003e  andi        $v0, $v0, 0x3E
    ctx->pc = 0x4c09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)62);
    // 0x4c09d8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c09dc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c09dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c09e0: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4c09e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4c09e4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4c09e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c09e8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4C09E8u;
    {
        const bool branch_taken_0x4c09e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09E8u;
        // 0x4c09ec: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c09e8) {
            ctx->pc = 0x4C0AC8u;
            goto label_4c0ac8;
        }
    }
    ctx->pc = 0x4C09F0u;
    // 0x4c09f0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c09f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c09f4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4c09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c09f8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c09f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c09fc: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x4c09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c0a00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0a04: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x4c0a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0a08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0a0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c0a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c0a10: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c0a14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0a18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c0a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c0a1c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c0a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c0a20: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x4c0a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0a24: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0a28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c0a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c0a2c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x4c0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x4c0a30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c0a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c0a34: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4c0a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0a38: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4c0a38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c0a3c: 0x87c70000  lh          $a3, 0x0($fp)
    ctx->pc = 0x4c0a3cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c0a40: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0a44: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c0a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c0a48: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4c0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4c0a4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c0a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c0a50: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4c0a50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c0a54: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c0a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c0a58: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x4c0a58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0a5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c0a60: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4c0a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4c0a64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c0a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c0a68: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c0a6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0a70: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x4c0a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c0a74: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4c0a74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0a78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c0a7c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0a80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0a84: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c0a88: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4c0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4c0a8c: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x4c0a8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0a90: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c0a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c0a94: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c0a98: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x4c0a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x4c0a9c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4c0a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4c0aa0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x4c0aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x4c0aa4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c0aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c0aa8: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x4c0aa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c0aac: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c0aacu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c0ab0: 0xa624233a  sh          $a0, 0x233A($s1)
    ctx->pc = 0x4c0ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9018), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c0ab4: 0x1144025  or          $t0, $t0, $s4
    ctx->pc = 0x4c0ab4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 20));
    // 0x4c0ab8: 0xa623233c  sh          $v1, 0x233C($s1)
    ctx->pc = 0x4c0ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c0abc: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4c0abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4c0ac0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4C0AC0u;
    {
        const bool branch_taken_0x4c0ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0AC0u;
        // 0x4c0ac4: 0xaee60000  sw          $a2, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0ac0) {
            ctx->pc = 0x4C0B30u;
            goto label_4c0b30;
        }
    }
    ctx->pc = 0x4C0AC8u;
label_4c0ac8:
    // 0x4c0ac8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4c0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c0acc: 0x26100e7c  addiu       $s0, $s0, 0xE7C
    ctx->pc = 0x4c0accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3708));
    // 0x4c0ad0: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x4c0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4c0ad4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c0ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0ad8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4c0ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0adc: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4C0ADCu;
    SET_GPR_U32(ctx, 31, 0x4C0AE4u);
    ctx->pc = 0x4C0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0ADCu;
    // 0x4c0ae0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4C0ADCu, 0x4C0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0AE4u;
label_4c0ae4:
    // 0x4c0ae4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4c0ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c0ae8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c0ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c0aec: 0xa623233a  sh          $v1, 0x233A($s1)
    ctx->pc = 0x4c0aecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c0af0: 0xa622233c  sh          $v0, 0x233C($s1)
    ctx->pc = 0x4c0af0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0af4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4c0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0af8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4c0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0afc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c0afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c0b00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0b04: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0b08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0b0c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4c0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4c0b10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c0b14: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4c0b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4c0b18: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4c0b18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0b1c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4c0b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c0b20: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c0b24: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c0b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c0b28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c0b2c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4c0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_4c0b30:
    // 0x4c0b30: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4c0b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c0b34: 0xa622233e  sh          $v0, 0x233E($s1)
    ctx->pc = 0x4c0b34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9022), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0b38: 0x2643d680  addiu       $v1, $s2, -0x2980
    ctx->pc = 0x4c0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4c0b3c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4c0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c0b40: 0xa4622330  sh          $v0, 0x2330($v1)
    ctx->pc = 0x4c0b40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0b44: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4C0B44u;
    SET_GPR_U32(ctx, 31, 0x4C0B4Cu);
    ctx->pc = 0x4C0B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0B44u;
    // 0x4c0b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4C0B44u, 0x4C0B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0B4Cu;
label_4c0b4c:
    // 0x4c0b4c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c0b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c0b50: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4c0b50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4c0b54: 0x24e90e84  addiu       $t1, $a3, 0xE84
    ctx->pc = 0x4c0b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 3716));
    // 0x4c0b58: 0x250a0e88  addiu       $t2, $t0, 0xE88
    ctx->pc = 0x4c0b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 3720));
    // 0x4c0b5c: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4c0b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0E88u));
    // 0x4c0b60: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0b64: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4c0b64u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0E84u));
    // 0x4c0b68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0b6c: 0x3463045f  ori         $v1, $v1, 0x45F
    ctx->pc = 0x4c0b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1119);
    // 0x4c0b70: 0x344204b3  ori         $v0, $v0, 0x4B3
    ctx->pc = 0x4c0b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1203);
    // 0x4c0b74: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c0b74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c0b78: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c0b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c0b7c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c0b7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c0b80: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c0b80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c0b84: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4c0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4c0b88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c0b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0b8c: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4c0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4c0b90: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4c0b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0b94: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4C0B94u;
    SET_GPR_U32(ctx, 31, 0x4C0B9Cu);
    ctx->pc = 0x4C0B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0B94u;
    // 0x4c0b98: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4C0B94u, 0x4C0B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0B9Cu;
label_4c0b9c:
    // 0x4c0b9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0ba0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4c0ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c0ba4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4c0ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c0ba8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4c0ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c0bac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4c0bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c0bb0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4c0bb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c0bb4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4c0bb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4c0bb8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4c0bb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4c0bbc: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4c0bbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4c0bc0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4c0bc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4c0bc4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4c0bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4c0bc8: 0x8130300  j           func_4C0C00
    ctx->pc = 0x4C0BC8u;
    ctx->pc = 0x4C0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0BC8u;
    // 0x4c0bcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C0C00u;
    goto label_4c0c00;
    ctx->pc = 0x4C0BD0u;
label_4c0bd0:
    // 0x4c0bd0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4c0bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c0bd4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4c0bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c0bd8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4c0bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c0bdc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4c0bdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c0be0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4c0be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c0be4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4c0be4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4c0be8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4c0be8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4c0bec: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4c0becu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4c0bf0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4c0bf0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4c0bf4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4c0bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4c0bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C0BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0BF8u;
        // 0x4c0bfc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C0C00u;
label_4c0c00:
    // 0x4c0c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c0c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c0c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c0c08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c0c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c0c0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c0c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c0c10: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C0C10u;
    SET_GPR_U32(ctx, 31, 0x4C0C18u);
    ctx->pc = 0x4C0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C10u;
    // 0x4c0c14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C0C10u, 0x4C0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C18u;
label_4c0c18:
    // 0x4c0c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0c1c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4C0C1Cu;
    {
        const bool branch_taken_0x4c0c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C1Cu;
        // 0x4c0c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c1c) {
            ctx->pc = 0x4C0CA0u;
            goto label_4c0ca0;
        }
    }
    ctx->pc = 0x4C0C24u;
    // 0x4c0c24: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C0C24u;
    SET_GPR_U32(ctx, 31, 0x4C0C2Cu);
    ctx->pc = 0x4C0C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C24u;
    // 0x4c0c28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C0C24u, 0x4C0C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C2Cu;
label_4c0c2c:
    // 0x4c0c2c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c0c30: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4c0c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c0c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0c38: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x4C0C38u;
    {
        const bool branch_taken_0x4c0c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C38u;
        // 0x4c0c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c38) {
            ctx->pc = 0x4C0C78u;
            goto label_4c0c78;
        }
    }
    ctx->pc = 0x4C0C40u;
    // 0x4c0c40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c0c44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4c0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4c0c48: 0xa4c223c4  sh          $v0, 0x23C4($a2)
    ctx->pc = 0x4c0c48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c0c4c: 0xa4c3232e  sh          $v1, 0x232E($a2)
    ctx->pc = 0x4c0c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c0c50: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C0C50u;
    SET_GPR_U32(ctx, 31, 0x4C0C58u);
    ctx->pc = 0x4C0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C50u;
    // 0x4c0c54: 0xa4c0232c  sh          $zero, 0x232C($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C0C50u, 0x4C0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C58u;
label_4c0c58:
    // 0x4c0c58: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C0C58u;
    SET_GPR_U32(ctx, 31, 0x4C0C60u);
    ctx->pc = 0x4C0C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C58u;
    // 0x4c0c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C0C58u, 0x4C0C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C60u;
label_4c0c60:
    // 0x4c0c60: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C0C60u;
    SET_GPR_U32(ctx, 31, 0x4C0C68u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C0C60u, 0x4C0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C68u;
label_4c0c68:
    // 0x4c0c68: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C0C68u;
    SET_GPR_U32(ctx, 31, 0x4C0C70u);
    ctx->pc = 0x4C0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C68u;
    // 0x4c0c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C0C68u, 0x4C0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C70u;
label_4c0c70:
    // 0x4c0c70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C0C70u;
    {
        const bool branch_taken_0x4c0c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C70u;
        // 0x4c0c74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c70) {
            ctx->pc = 0x4C0CA4u;
            goto label_4c0ca4;
        }
    }
    ctx->pc = 0x4C0C78u;
label_4c0c78:
    // 0x4c0c78: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C0C78u;
    SET_GPR_U32(ctx, 31, 0x4C0C80u);
    ctx->pc = 0x4C0C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C78u;
    // 0x4c0c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C0C78u, 0x4C0C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C80u;
label_4c0c80:
    // 0x4c0c80: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C0C80u;
    {
        const bool branch_taken_0x4c0c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0C80u;
        // 0x4c0c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0c80) {
            ctx->pc = 0x4C0CA0u;
            goto label_4c0ca0;
        }
    }
    ctx->pc = 0x4C0C88u;
    // 0x4c0c88: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4c0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4c0c8c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c0c90: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C0C90u;
    SET_GPR_U32(ctx, 31, 0x4C0C98u);
    ctx->pc = 0x4C0C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C90u;
    // 0x4c0c94: 0xa443f9ae  sh          $v1, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C0C90u, 0x4C0C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0C98u;
label_4c0c98:
    // 0x4c0c98: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C0C98u;
    SET_GPR_U32(ctx, 31, 0x4C0CA0u);
    ctx->pc = 0x4C0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0C98u;
    // 0x4c0c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C0C98u, 0x4C0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0CA0u;
label_4c0ca0:
    // 0x4c0ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c0ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0ca4:
    // 0x4c0ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c0ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c0ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c0cac: 0x3e00008  jr          $ra
    ctx->pc = 0x4C0CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CACu;
        // 0x4c0cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C0CB4u;
    // 0x4c0cb4: 0x0  nop
    ctx->pc = 0x4c0cb4u;
    // NOP
    ctx->pc = 0x4c0cb8u;
}
