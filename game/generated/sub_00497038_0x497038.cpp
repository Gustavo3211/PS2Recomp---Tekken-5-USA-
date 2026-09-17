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

// Function: sub_00497038
// Address: 0x497038 - 0x4973f8
void sub_00497038_0x497038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497038_0x497038");
#endif

    switch (ctx->pc) {
        case 0x497060u: goto label_497060;
        case 0x497238u: goto label_497238;
        case 0x497248u: goto label_497248;
        case 0x497258u: goto label_497258;
        case 0x4973e0u: goto label_4973e0;
        case 0x4973f0u: goto label_4973f0;
        default: break;
    }

    ctx->pc = 0x497038u;

label_497038:
    // 0x497038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x497038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49703c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x497040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x497044: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x497044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x497048: 0x8c430af4  lw          $v1, 0xAF4($v0)
    ctx->pc = 0x497048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AF4u));
    // 0x49704c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497050: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x497050u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x497054: 0x8125b9e  j           func_496E78
    ctx->pc = 0x497054u;
    ctx->pc = 0x497058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497054u;
    // 0x497058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496E78u, 0x497054u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49705Cu;
    // 0x49705c: 0x0  nop
    ctx->pc = 0x49705cu;
    // NOP
label_497060:
    // 0x497060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x497060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x497064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x497064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x497068: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x497068u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x49706c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x497070: 0x2628d600  addiu       $t0, $s1, -0x2A00
    ctx->pc = 0x497070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956544));
    // 0x497074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x497074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x497078: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x497078u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D604u));
    // 0x49707c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49707Cu;
    {
        const bool branch_taken_0x49707c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49707Cu;
        // 0x497080: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49707c) {
            ctx->pc = 0x4970A8u;
            goto label_4970a8;
        }
    }
    ctx->pc = 0x497084u;
    // 0x497084: 0x8503003c  lh          $v1, 0x3C($t0)
    ctx->pc = 0x497084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x497088: 0x26050af8  addiu       $a1, $s0, 0xAF8
    ctx->pc = 0x497088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x49708c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49708cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x497090: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x497090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x497094: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x497094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x497098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49709c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4970a0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4970A0u;
    {
        const bool branch_taken_0x4970a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4970A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4970A0u;
        // 0x4970a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4970a0) {
            ctx->pc = 0x4971E4u;
            goto label_4971e4;
        }
    }
    ctx->pc = 0x4970A8u;
label_4970a8:
    // 0x4970a8: 0x8502003c  lh          $v0, 0x3C($t0)
    ctx->pc = 0x4970a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x4970ac: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x4970acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x4970b0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4970b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4970b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4970b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4970b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4970bc: 0x9506003e  lhu         $a2, 0x3E($t0)
    ctx->pc = 0x4970bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 62)));
    // 0x4970c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4970c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4970c4: 0x95070040  lhu         $a3, 0x40($t0)
    ctx->pc = 0x4970c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x4970c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4970c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4970cc: 0x9508004a  lhu         $t0, 0x4A($t0)
    ctx->pc = 0x4970ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 74)));
    // 0x4970d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4970d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4970d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4970d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4970d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4970d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4970dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4970dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4970e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4970e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4970e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4970e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4970e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4970e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4970ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4970ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4970f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4970f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4970f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4970f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4970f8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4970f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4970fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4970fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x497100: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x497100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497104: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x497104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x497108: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x497108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49710c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497110: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x497114: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497118: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x497118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49711c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x497120: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x497120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497124: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x497124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x497128: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x497128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49712c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49712cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497130: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x497134: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497138: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x497138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49713c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x497140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497144: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x497148: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x497148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49714c: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x49714cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x497150: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x497150u;
    {
        const bool branch_taken_0x497150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497150u;
        // 0x497154: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497150) {
            ctx->pc = 0x4971ECu;
            goto label_4971ec;
        }
    }
    ctx->pc = 0x497158u;
    // 0x497158: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x497158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49715c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49715cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x497160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x497160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x497164: 0x8c63acc0  lw          $v1, -0x5340($v1)
    ctx->pc = 0x497164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945984)));
    // 0x497168: 0x600008  jr          $v1
    ctx->pc = 0x497168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x497170u: goto label_497170;
            case 0x497180u: goto label_497180;
            case 0x497198u: goto label_497198;
            case 0x4971B0u: goto label_4971b0;
            case 0x4971C8u: goto label_4971c8;
            case 0x4971E4u: goto label_4971e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497168u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x497170u;
label_497170:
    // 0x497170: 0x25240af8  addiu       $a0, $t1, 0xAF8
    ctx->pc = 0x497170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2808));
    // 0x497174: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x497174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497178: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x497178u;
    {
        const bool branch_taken_0x497178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497178u;
        // 0x49717c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497178) {
            ctx->pc = 0x4971DCu;
            goto label_4971dc;
        }
    }
    ctx->pc = 0x497180u;
label_497180:
    // 0x497180: 0x25240af8  addiu       $a0, $t1, 0xAF8
    ctx->pc = 0x497180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2808));
    // 0x497184: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x497184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497188: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49718c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x49718Cu;
    {
        const bool branch_taken_0x49718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49718Cu;
        // 0x497190: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49718c) {
            ctx->pc = 0x4971D8u;
            goto label_4971d8;
        }
    }
    ctx->pc = 0x497194u;
    // 0x497194: 0x0  nop
    ctx->pc = 0x497194u;
    // NOP
label_497198:
    // 0x497198: 0x25240af8  addiu       $a0, $t1, 0xAF8
    ctx->pc = 0x497198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2808));
    // 0x49719c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4971a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4971a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4971a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4971A4u;
    {
        const bool branch_taken_0x4971a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4971A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4971A4u;
        // 0x4971a8: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4971a4) {
            ctx->pc = 0x4971D8u;
            goto label_4971d8;
        }
    }
    ctx->pc = 0x4971ACu;
    // 0x4971ac: 0x0  nop
    ctx->pc = 0x4971acu;
    // NOP
label_4971b0:
    // 0x4971b0: 0x25240af8  addiu       $a0, $t1, 0xAF8
    ctx->pc = 0x4971b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2808));
    // 0x4971b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4971b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4971b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4971b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4971bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4971BCu;
    {
        const bool branch_taken_0x4971bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4971C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4971BCu;
        // 0x4971c0: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4971bc) {
            ctx->pc = 0x4971D8u;
            goto label_4971d8;
        }
    }
    ctx->pc = 0x4971C4u;
    // 0x4971c4: 0x0  nop
    ctx->pc = 0x4971c4u;
    // NOP
label_4971c8:
    // 0x4971c8: 0x25240af8  addiu       $a0, $t1, 0xAF8
    ctx->pc = 0x4971c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2808));
    // 0x4971cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4971ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4971d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4971d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4971d4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4971d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4971d8:
    // 0x4971d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4971d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4971dc:
    // 0x4971dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4971dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4971e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4971e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4971e4:
    // 0x4971e4: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x4971e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x4971e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4971e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4971ec:
    // 0x4971ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4971ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4971f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4971f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4971f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4971f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4971f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4971f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4971fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4971fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497200: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x497204: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x497204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497208: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x497208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x49720c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49720Cu;
    {
        const bool branch_taken_0x49720c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49720Cu;
        // 0x497210: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49720c) {
            ctx->pc = 0x49725Cu;
            goto label_49725c;
        }
    }
    ctx->pc = 0x497214u;
    // 0x497214: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x497214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x497218: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x497218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49721c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x497220: 0x8c63ad00  lw          $v1, -0x5300($v1)
    ctx->pc = 0x497220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946048)));
    // 0x497224: 0x600008  jr          $v1
    ctx->pc = 0x497224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x497230u: goto label_497230;
            case 0x497240u: goto label_497240;
            case 0x497250u: goto label_497250;
            case 0x497258u: goto label_497258;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497224u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49722Cu;
    // 0x49722c: 0x0  nop
    ctx->pc = 0x49722cu;
    // NOP
label_497230:
    // 0x497230: 0xc125bc4  jal         func_496F10
    ctx->pc = 0x497230u;
    SET_GPR_U32(ctx, 31, 0x497238u);
    ctx->pc = 0x496F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496F10u, 0x497230u, 0x497238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497238u;
label_497238:
    // 0x497238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x497238u;
    {
        const bool branch_taken_0x497238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497238u;
        // 0x49723c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497238) {
            ctx->pc = 0x49725Cu;
            goto label_49725c;
        }
    }
    ctx->pc = 0x497240u;
label_497240:
    // 0x497240: 0xc125bcc  jal         func_496F30
    ctx->pc = 0x497240u;
    SET_GPR_U32(ctx, 31, 0x497248u);
    ctx->pc = 0x496F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496F30u, 0x497240u, 0x497248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497248u;
label_497248:
    // 0x497248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x497248u;
    {
        const bool branch_taken_0x497248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497248u;
        // 0x49724c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497248) {
            ctx->pc = 0x49725Cu;
            goto label_49725c;
        }
    }
    ctx->pc = 0x497250u;
label_497250:
    // 0x497250: 0xc125c0e  jal         func_497038
    ctx->pc = 0x497250u;
    SET_GPR_U32(ctx, 31, 0x497258u);
    ctx->pc = 0x497038u;
    goto label_497038;
    ctx->pc = 0x497258u;
label_497258:
    // 0x497258: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x497258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_49725c:
    // 0x49725c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497260: 0x8443d688  lh          $v1, -0x2978($v0)
    ctx->pc = 0x497260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956680)));
    // 0x497264: 0x10640066  beq         $v1, $a0, . + 4 + (0x66 << 2)
    ctx->pc = 0x497264u;
    {
        const bool branch_taken_0x497264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x497268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497264u;
        // 0x497268: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497264) {
            ctx->pc = 0x497400u;
            return;
        }
    }
    ctx->pc = 0x49726Cu;
    // 0x49726c: 0x8c437d0c  lw          $v1, 0x7D0C($v0)
    ctx->pc = 0x49726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32012)));
    // 0x497270: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x497270u;
    {
        const bool branch_taken_0x497270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497270u;
        // 0x497274: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497270) {
            ctx->pc = 0x497400u;
            return;
        }
    }
    ctx->pc = 0x497278u;
    // 0x497278: 0x24487d10  addiu       $t0, $v0, 0x7D10
    ctx->pc = 0x497278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 32016));
    // 0x49727c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x497280: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x497280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497284: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497288: 0x440005d  bltz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x497288u;
    {
        const bool branch_taken_0x497288 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497288u;
        // 0x49728c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497288) {
            ctx->pc = 0x497400u;
            return;
        }
    }
    ctx->pc = 0x497290u;
    // 0x497290: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x497290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x497294: 0x2625d600  addiu       $a1, $s1, -0x2A00
    ctx->pc = 0x497294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956544));
    // 0x497298: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49729c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49729cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4972a0: 0x84a2003c  lh          $v0, 0x3C($a1)
    ctx->pc = 0x4972a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x4972a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4972a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4972a8: 0x94a70040  lhu         $a3, 0x40($a1)
    ctx->pc = 0x4972a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x4972ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4972acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4972b0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x4972b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x4972b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4972b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4972b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4972b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4972bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4972bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4972c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4972c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4972c4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4972c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4972c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4972c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4972cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4972ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4972d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4972d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4972d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4972d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4972d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4972d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4972dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4972dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4972e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4972e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4972e4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4972e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4972e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4972e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4972ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4972ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4972f0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4972f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4972f4: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x4972f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4972f8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4972F8u;
    {
        const bool branch_taken_0x4972f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4972f8) {
            ctx->pc = 0x4972FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4972F8u;
            // 0x4972fc: 0x3c05ffff  lui         $a1, 0xFFFF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497394u;
            goto label_497394;
        }
    }
    ctx->pc = 0x497300u;
    // 0x497300: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x497300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x497304: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x497304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x497308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x497308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49730c: 0x8c63ad30  lw          $v1, -0x52D0($v1)
    ctx->pc = 0x49730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946096)));
    // 0x497310: 0x600008  jr          $v1
    ctx->pc = 0x497310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x497318u: goto label_497318;
            case 0x497328u: goto label_497328;
            case 0x497340u: goto label_497340;
            case 0x497358u: goto label_497358;
            case 0x497370u: goto label_497370;
            case 0x49738Cu: goto label_49738c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x497318u;
label_497318:
    // 0x497318: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x497318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x49731c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497320: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x497320u;
    {
        const bool branch_taken_0x497320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497320u;
        // 0x497324: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497320) {
            ctx->pc = 0x497384u;
            goto label_497384;
        }
    }
    ctx->pc = 0x497328u;
label_497328:
    // 0x497328: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x497328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x49732c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49732cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497334: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x497334u;
    {
        const bool branch_taken_0x497334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497334u;
        // 0x497338: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x497334) {
            ctx->pc = 0x497380u;
            goto label_497380;
        }
    }
    ctx->pc = 0x49733Cu;
    // 0x49733c: 0x0  nop
    ctx->pc = 0x49733cu;
    // NOP
label_497340:
    // 0x497340: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x497340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x497344: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x497344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49734c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49734Cu;
    {
        const bool branch_taken_0x49734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49734Cu;
        // 0x497350: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49734c) {
            ctx->pc = 0x497380u;
            goto label_497380;
        }
    }
    ctx->pc = 0x497354u;
    // 0x497354: 0x0  nop
    ctx->pc = 0x497354u;
    // NOP
label_497358:
    // 0x497358: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x497358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x49735c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49735cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497360: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x497364u;
    {
        const bool branch_taken_0x497364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497364u;
        // 0x497368: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x497364) {
            ctx->pc = 0x497380u;
            goto label_497380;
        }
    }
    ctx->pc = 0x49736Cu;
    // 0x49736c: 0x0  nop
    ctx->pc = 0x49736cu;
    // NOP
label_497370:
    // 0x497370: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x497370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x497374: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x497374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x497378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49737c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x49737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_497380:
    // 0x497380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_497384:
    // 0x497384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x497388: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x497388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_49738c:
    // 0x49738c: 0x26040af8  addiu       $a0, $s0, 0xAF8
    ctx->pc = 0x49738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2808));
    // 0x497390: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x497390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_497394:
    // 0x497394: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497398: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x497398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49739c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4973a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4973a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4973a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4973a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4973a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4973a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4973ac: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x4973acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4973b0: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x4973b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4973b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4973B4u;
    {
        const bool branch_taken_0x4973b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4973B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4973B4u;
        // 0x4973b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4973b4) {
            ctx->pc = 0x497404u;
            return;
        }
    }
    ctx->pc = 0x4973BCu;
    // 0x4973bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4973bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4973c0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4973c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4973c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4973c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4973c8: 0x8c63ad70  lw          $v1, -0x5290($v1)
    ctx->pc = 0x4973c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946160)));
    // 0x4973cc: 0x600008  jr          $v1
    ctx->pc = 0x4973CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4973D8u: goto label_4973d8;
            case 0x4973E8u: goto label_4973e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4973CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4973D4u;
    // 0x4973d4: 0x0  nop
    ctx->pc = 0x4973d4u;
    // NOP
label_4973d8:
    // 0x4973d8: 0xc125bc4  jal         func_496F10
    ctx->pc = 0x4973D8u;
    SET_GPR_U32(ctx, 31, 0x4973E0u);
    ctx->pc = 0x496F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496F10u, 0x4973D8u, 0x4973E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4973E0u;
label_4973e0:
    // 0x4973e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4973E0u;
    {
        const bool branch_taken_0x4973e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4973E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4973E0u;
        // 0x4973e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4973e0) {
            ctx->pc = 0x497404u;
            return;
        }
    }
    ctx->pc = 0x4973E8u;
label_4973e8:
    // 0x4973e8: 0xc125c0e  jal         func_497038
    ctx->pc = 0x4973E8u;
    SET_GPR_U32(ctx, 31, 0x4973F0u);
    ctx->pc = 0x497038u;
    goto label_497038;
    ctx->pc = 0x4973F0u;
label_4973f0:
    // 0x4973f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4973F0u;
    {
        const bool branch_taken_0x4973f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4973F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4973F0u;
        // 0x4973f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4973f0) {
            ctx->pc = 0x497404u;
            return;
        }
    }
    ctx->pc = 0x4973F8u;
}
