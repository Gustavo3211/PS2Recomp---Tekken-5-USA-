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

// Function: sub_004EFF90
// Address: 0x4eff90 - 0x4f0258
void sub_004EFF90_0x4eff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFF90_0x4eff90");
#endif

    switch (ctx->pc) {
        case 0x4f0040u: goto label_4f0040;
        case 0x4f00b4u: goto label_4f00b4;
        case 0x4f0120u: goto label_4f0120;
        case 0x4f0128u: goto label_4f0128;
        case 0x4f0144u: goto label_4f0144;
        case 0x4f016cu: goto label_4f016c;
        case 0x4f0174u: goto label_4f0174;
        case 0x4f01f8u: goto label_4f01f8;
        default: break;
    }

    ctx->pc = 0x4eff90u;

    // 0x4eff90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4eff94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4eff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4eff98: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4eff98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eff9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4effa0: 0x26a2014a  addiu       $v0, $s5, 0x14A
    ctx->pc = 0x4effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 330));
    // 0x4effa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4effa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4effa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4effa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4effac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4effacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4effb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4effb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4effb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4effb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4effb8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4effb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4effbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4effbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4effc0: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4effc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4effc4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4effc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4effc8: 0x4a00095  bltz        $a1, . + 4 + (0x95 << 2)
    ctx->pc = 0x4EFFC8u;
    {
        const bool branch_taken_0x4effc8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4EFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFFC8u;
        // 0x4effcc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4effc8) {
            ctx->pc = 0x4F0220u;
            goto label_4f0220;
        }
    }
    ctx->pc = 0x4EFFD0u;
    // 0x4effd0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4effd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4effd4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4effd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4effd8: 0x24531210  addiu       $s3, $v0, 0x1210
    ctx->pc = 0x4effd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4effdc: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4effdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4effe0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4effe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4effe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4effe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4effe8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4effe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4effec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4effecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4efff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efff4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4efff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4efff8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4efff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4efffc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4efffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f0000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0004: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f0004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f0008: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f0008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f000c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F000Cu;
    {
        const bool branch_taken_0x4f000c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F000Cu;
        // 0x4f0010: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f000c) {
            ctx->pc = 0x4F0038u;
            goto label_4f0038;
        }
    }
    ctx->pc = 0x4F0014u;
    // 0x4f0014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f0018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f001c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f001cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0020: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0024: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0024u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f0028: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f0028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f002c: 0x813c16c  j           func_4F05B0
    ctx->pc = 0x4F002Cu;
    ctx->pc = 0x4F0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F002Cu;
    // 0x4f0030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    sub_004F05B0_0x4f05b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F0034u;
    // 0x4f0034: 0x0  nop
    ctx->pc = 0x4f0034u;
    // NOP
label_4f0038:
    // 0x4f0038: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F0038u;
    SET_GPR_U32(ctx, 31, 0x4F0040u);
    ctx->pc = 0x4F003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0038u;
    // 0x4f003c: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F0038u, 0x4F0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0040u;
label_4f0040:
    // 0x4f0040: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0044: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f0048: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f0048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f004c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f004cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0050: 0x24c61220  addiu       $a2, $a2, 0x1220
    ctx->pc = 0x4f0050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4640));
    // 0x4f0054: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0058: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4f0058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f005c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f005cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f0060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0064: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x4f0064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x4f0068: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4f0068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f006c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f006cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f0070: 0x26311224  addiu       $s1, $s1, 0x1224
    ctx->pc = 0x4f0070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4644));
    // 0x4f0074: 0x2652121c  addiu       $s2, $s2, 0x121C
    ctx->pc = 0x4f0074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4636));
    // 0x4f0078: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f0078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f007c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f007cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f0080: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0084: 0x26101214  addiu       $s0, $s0, 0x1214
    ctx->pc = 0x4f0084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
    // 0x4f0088: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f0088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f008c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f008cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0090: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f0090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0094: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4f0094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4f0098: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f0098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f009c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f00a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4f00a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f00a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f00a8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f00a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4f00ac: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F00ACu;
    SET_GPR_U32(ctx, 31, 0x4F00B4u);
    ctx->pc = 0x4F00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F00ACu;
    // 0x4f00b0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F00ACu, 0x4F00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F00B4u;
label_4f00b4:
    // 0x4f00b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f00b8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f00b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f00bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f00bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f00c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f00c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f00c4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f00c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f00c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f00cc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f00ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f00d0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4f00d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f00d4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4f00d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4f00d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4f00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f00dc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f00dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f00e0: 0xd43024  and         $a2, $a2, $s4
    ctx->pc = 0x4f00e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 20));
    // 0x4f00e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f00e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f00e8: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x4f00e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x4f00ec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f00f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f00f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f00f4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f00f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f00f8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x4f00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x4f00fc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f00fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f0100: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0104: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4f0104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f0108: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f0108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f010c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4f010cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4f0110: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f0110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4f0114: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4f0114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4f0118: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F0118u;
    SET_GPR_U32(ctx, 31, 0x4F0120u);
    ctx->pc = 0x4F011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0118u;
    // 0x4f011c: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F0118u, 0x4F0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0120u;
label_4f0120:
    // 0x4f0120: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F0120u;
    SET_GPR_U32(ctx, 31, 0x4F0128u);
    ctx->pc = 0x4F0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0120u;
    // 0x4f0124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F0120u, 0x4F0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0128u;
label_4f0128:
    // 0x4f0128: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f0128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f012c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f0130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0134: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f0134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0138: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4f0138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f013c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F013Cu;
    SET_GPR_U32(ctx, 31, 0x4F0144u);
    ctx->pc = 0x4F0140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F013Cu;
    // 0x4f0140: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F013Cu, 0x4F0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0144u;
label_4f0144:
    // 0x4f0144: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4f0144u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0148: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f0148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f014c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0150: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0154: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4f0154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f0158: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f0158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f015c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f015cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4f0160: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f0160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f0164: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0164u;
    SET_GPR_U32(ctx, 31, 0x4F016Cu);
    ctx->pc = 0x4F0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0164u;
    // 0x4f0168: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0164u, 0x4F016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F016Cu;
label_4f016c:
    // 0x4f016c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F016Cu;
    SET_GPR_U32(ctx, 31, 0x4F0174u);
    ctx->pc = 0x4F0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F016Cu;
    // 0x4f0170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F016Cu, 0x4F0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0174u;
label_4f0174:
    // 0x4f0174: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4f0174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0178: 0x86a7011a  lh          $a3, 0x11A($s5)
    ctx->pc = 0x4f0178u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x4f017c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4f017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4f0180: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f0180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0184: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f0184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f0188: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4f0188u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f018c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4f018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4f0190: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4f0190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4f0194: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4f0194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0198: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f0198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f019c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x4f019cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4f01a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f01a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f01a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f01a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f01a8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4f01a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4f01ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f01b0: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x4f01b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x4f01b4: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x4f01b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f01b8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f01b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f01bc: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x4f01bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x4f01c0: 0xa4672334  sh          $a3, 0x2334($v1)
    ctx->pc = 0x4f01c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9012), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f01c4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4f01c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4f01c8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4f01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4f01cc: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x4f01ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f01d0: 0x96a2011e  lhu         $v0, 0x11E($s5)
    ctx->pc = 0x4f01d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x4f01d4: 0xa468232c  sh          $t0, 0x232C($v1)
    ctx->pc = 0x4f01d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f01d8: 0xa4622336  sh          $v0, 0x2336($v1)
    ctx->pc = 0x4f01d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f01dc: 0xa4662338  sh          $a2, 0x2338($v1)
    ctx->pc = 0x4f01dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9016), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f01e0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x4f01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x4f01e4: 0xac602340  sw          $zero, 0x2340($v1)
    ctx->pc = 0x4f01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9024), GPR_U32(ctx, 0));
    // 0x4f01e8: 0xac602344  sw          $zero, 0x2344($v1)
    ctx->pc = 0x4f01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9028), GPR_U32(ctx, 0));
    // 0x4f01ec: 0xac602348  sw          $zero, 0x2348($v1)
    ctx->pc = 0x4f01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9032), GPR_U32(ctx, 0));
    // 0x4f01f0: 0xc13d6c2  jal         func_4F5B08
    ctx->pc = 0x4F01F0u;
    SET_GPR_U32(ctx, 31, 0x4F01F8u);
    ctx->pc = 0x4F01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F01F0u;
    // 0x4f01f4: 0xa4602332  sh          $zero, 0x2332($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9010), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B08u, 0x4F01F0u, 0x4F01F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F01F8u;
label_4f01f8:
    // 0x4f01f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f01f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f01fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f01fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f0204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0208: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f0208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f020c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f020cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0210: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f0214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f0214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0218: 0x813c16c  j           func_4F05B0
    ctx->pc = 0x4F0218u;
    ctx->pc = 0x4F021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0218u;
    // 0x4f021c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    sub_004F05B0_0x4f05b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F0220u;
label_4f0220:
    // 0x4f0220: 0x26a301bc  addiu       $v1, $s5, 0x1BC
    ctx->pc = 0x4f0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 444));
    // 0x4f0224: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f0228: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f0228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f022c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f022cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0234: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f0234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f0238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f0238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f023c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f023cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0240: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0240u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f0244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0248: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f0248u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f024c: 0x813c16c  j           func_4F05B0
    ctx->pc = 0x4F024Cu;
    ctx->pc = 0x4F0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F024Cu;
    // 0x4f0250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    sub_004F05B0_0x4f05b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F0254u;
    // 0x4f0254: 0x0  nop
    ctx->pc = 0x4f0254u;
    // NOP
    ctx->pc = 0x4f0258u;
}
