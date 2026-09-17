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

// Function: sub_004DF640
// Address: 0x4df640 - 0x4e004c
void sub_004DF640_0x4df640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF640_0x4df640");
#endif

    switch (ctx->pc) {
        case 0x4df680u: goto label_4df680;
        case 0x4df6a0u: goto label_4df6a0;
        case 0x4df6a8u: goto label_4df6a8;
        case 0x4df7b4u: goto label_4df7b4;
        case 0x4df824u: goto label_4df824;
        case 0x4df82cu: goto label_4df82c;
        case 0x4df870u: goto label_4df870;
        case 0x4df890u: goto label_4df890;
        case 0x4df998u: goto label_4df998;
        case 0x4df9a0u: goto label_4df9a0;
        case 0x4dfe74u: goto label_4dfe74;
        case 0x4dfeacu: goto label_4dfeac;
        case 0x4dfee4u: goto label_4dfee4;
        case 0x4dff4cu: goto label_4dff4c;
        case 0x4dff78u: goto label_4dff78;
        case 0x4dff80u: goto label_4dff80;
        case 0x4dffe0u: goto label_4dffe0;
        case 0x4dffe8u: goto label_4dffe8;
        case 0x4dfff8u: goto label_4dfff8;
        case 0x4e0028u: goto label_4e0028;
        case 0x4e0030u: goto label_4e0030;
        case 0x4e0038u: goto label_4e0038;
        default: break;
    }

    ctx->pc = 0x4df640u;

    // 0x4df640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4df640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4df644: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4df644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4df648: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4df648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4df64c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4df64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4df650: 0x24521164  addiu       $s2, $v0, 0x1164
    ctx->pc = 0x4df650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4452));
    // 0x4df654: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4df654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4df658: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4df658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df65c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4df65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4df660: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4df660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4df664: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4df664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4df668: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4df668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4df66c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4df66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4df670: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4df670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4df674: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4df674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4df678: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DF678u;
    SET_GPR_U32(ctx, 31, 0x4DF680u);
    ctx->pc = 0x4DF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF678u;
    // 0x4df67c: 0x267101b4  addiu       $s1, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DF678u, 0x4DF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF680u;
label_4df680:
    // 0x4df680: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4df680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4df684: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4df684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4df688: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x4DF688u;
    {
        const bool branch_taken_0x4df688 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4df688) {
            ctx->pc = 0x4DF7ACu;
            goto label_4df7ac;
        }
    }
    ctx->pc = 0x4DF690u;
    // 0x4df690: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4df690u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4df694: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4df694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df698: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DF698u;
    SET_GPR_U32(ctx, 31, 0x4DF6A0u);
    ctx->pc = 0x4DF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF698u;
    // 0x4df69c: 0x27d01148  addiu       $s0, $fp, 0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DF698u, 0x4DF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF6A0u;
label_4df6a0:
    // 0x4df6a0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DF6A0u;
    SET_GPR_U32(ctx, 31, 0x4DF6A8u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DF6A0u, 0x4DF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF6A8u;
label_4df6a8:
    // 0x4df6a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4df6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df6ac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4df6acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4df6b0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x4df6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4df6b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4df6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4df6b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df6bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df6c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df6c4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4df6c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df6c8: 0xa6650158  sh          $a1, 0x158($s3)
    ctx->pc = 0x4df6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 5));
    // 0x4df6cc: 0xa664015e  sh          $a0, 0x15E($s3)
    ctx->pc = 0x4df6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4df6d0: 0x866201b6  lh          $v0, 0x1B6($s3)
    ctx->pc = 0x4df6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 438)));
    // 0x4df6d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4df6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df6d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4df6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4df6dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df6e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df6e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df6e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df6ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df6f0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4df6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4df6f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4df6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4df6f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df6fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df700: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4df700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df704: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4DF704u;
    {
        const bool branch_taken_0x4df704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF704u;
        // 0x4df708: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df704) {
            ctx->pc = 0x4DF7A0u;
            goto label_4df7a0;
        }
    }
    ctx->pc = 0x4DF70Cu;
    // 0x4df70c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4df70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df710: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4df710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df714: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4df714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df718: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4df718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4df71c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df71cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df720: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4df720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4df724: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4df724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4df728: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4df728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4df72c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4df72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4df730: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4df730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4df734: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4df734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df738: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4df738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4df73c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df73cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df740: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4df740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4df744: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4df744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4df748: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4df748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4df74c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4df74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4df750: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df754: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4df754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df758: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df75c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df760: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4df760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4df764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df768: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4df768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4df76c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4df76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df770: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4df770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df774: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4df774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4df778: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4df778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df77c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4df77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4df780: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df788: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4df788u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4df78c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4df78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4df790: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4df790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4df794: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df798: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df79c: 0xa6620132  sh          $v0, 0x132($s3)
    ctx->pc = 0x4df79cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 2));
label_4df7a0:
    // 0x4df7a0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4df7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4df7a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4df7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4df7a8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4df7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4df7ac:
    // 0x4df7ac: 0xc125792  jal         func_495E48
    ctx->pc = 0x4DF7ACu;
    SET_GPR_U32(ctx, 31, 0x4DF7B4u);
    ctx->pc = 0x4DF7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF7ACu;
    // 0x4df7b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495E48u, 0x4DF7ACu, 0x4DF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF7B4u;
label_4df7b4:
    // 0x4df7b4: 0x1040022e  beqz        $v0, . + 4 + (0x22E << 2)
    ctx->pc = 0x4DF7B4u;
    {
        const bool branch_taken_0x4df7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF7B4u;
        // 0x4df7b8: 0x2663013a  addiu       $v1, $s3, 0x13A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 314));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df7b4) {
            ctx->pc = 0x4E0070u;
            return;
        }
    }
    ctx->pc = 0x4DF7BCu;
    // 0x4df7bc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4df7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4df7c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4df7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4df7c4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4df7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4df7c8: 0x2482d680  addiu       $v0, $a0, -0x2980
    ctx->pc = 0x4df7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4df7cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4df7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4df7d0: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4df7d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4df7d4: 0x245024a2  addiu       $s0, $v0, 0x24A2
    ctx->pc = 0x4df7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9378));
    // 0x4df7d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df7d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FB22u));
    // 0x4df7dc: 0x25f51154  addiu       $s5, $t7, 0x1154
    ctx->pc = 0x4df7dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 4436));
    // 0x4df7e0: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x4df7e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df7e4: 0x24671158  addiu       $a3, $v1, 0x1158
    ctx->pc = 0x4df7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x4df7e8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x4df7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x4df7ec: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4df7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4df7f0: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4df7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df7f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4df7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df7f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4df7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1158u));
    // 0x4df7fc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4df7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1154u));
    // 0x4df800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df808: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4df808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4df80c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4df80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4df810: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4df810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4df814: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4df814u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4df818: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4df818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df81c: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4DF81Cu;
    SET_GPR_U32(ctx, 31, 0x4DF824u);
    ctx->pc = 0x4DF820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF81Cu;
    // 0x4df820: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4DF81Cu, 0x4DF824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF824u;
label_4df824:
    // 0x4df824: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4DF824u;
    SET_GPR_U32(ctx, 31, 0x4DF82Cu);
    ctx->pc = 0x4DF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF824u;
    // 0x4df828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4DF824u, 0x4DF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF82Cu;
label_4df82c:
    // 0x4df82c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4df82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4df830: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4df830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4df834: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4DF834u;
    {
        const bool branch_taken_0x4df834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF834u;
        // 0x4df838: 0x3c1e007f  lui         $fp, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df834) {
            ctx->pc = 0x4DF948u;
            goto label_4df948;
        }
    }
    ctx->pc = 0x4DF83Cu;
    // 0x4df83c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4df83cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df840: 0x27d01148  addiu       $s0, $fp, 0x1148
    ctx->pc = 0x4df840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4df844: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4df844u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4df848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4df848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df84c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4df84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4df850: 0x26d2115c  addiu       $s2, $s6, 0x115C
    ctx->pc = 0x4df850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4444));
    // 0x4df854: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4df854u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4df858: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df85c: 0x26f1114c  addiu       $s1, $s7, 0x114C
    ctx->pc = 0x4df85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4df860: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df864: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4df864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4df868: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DF868u;
    SET_GPR_U32(ctx, 31, 0x4DF870u);
    ctx->pc = 0x4DF86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF868u;
    // 0x4df86c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DF868u, 0x4DF870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF870u;
label_4df870:
    // 0x4df870: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4df870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df874: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4df874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4df878: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4df878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4df87c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4df87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4df880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4df880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df884: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4df884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4df888: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DF888u;
    SET_GPR_U32(ctx, 31, 0x4DF890u);
    ctx->pc = 0x4DF88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF888u;
    // 0x4df88c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DF888u, 0x4DF890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF890u;
label_4df890:
    // 0x4df890: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4df890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4df894: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4df894u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4df898: 0x26680124  addiu       $t0, $s3, 0x124
    ctx->pc = 0x4df898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4df89c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4df89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4df8a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4df8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df8a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4df8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4df8a8: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4df8a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df8ac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4df8acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4df8b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df8b4: 0x2669012c  addiu       $t1, $s3, 0x12C
    ctx->pc = 0x4df8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x4df8b8: 0x8662015a  lh          $v0, 0x15A($s3)
    ctx->pc = 0x4df8b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 346)));
    // 0x4df8bc: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4df8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4df8c0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4df8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4df8c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df8c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df8cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df8d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df8d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df8d8: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4df8d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4df8dc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4df8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4df8e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df8e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df8e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df8ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df8f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4df8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4df8f4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4df8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4df8f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df8fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df900: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4df900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df904: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4df904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4df908: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x4df908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4df90c: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x4df90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4df910: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x4df910u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4df914: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x4df914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4df918: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x4df918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x4df91c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x4df91cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x4df920: 0xe6280b  movn        $a1, $a3, $a2
    ctx->pc = 0x4df920u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x4df924: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4df924u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4df928: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4df928u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4df92c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4df92cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4df930: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4df930u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4df934: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4df934u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4df938: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4df938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df93c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4DF93Cu;
    {
        const bool branch_taken_0x4df93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF93Cu;
        // 0x4df940: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df93c) {
            ctx->pc = 0x4DF958u;
            goto label_4df958;
        }
    }
    ctx->pc = 0x4DF944u;
    // 0x4df944: 0x0  nop
    ctx->pc = 0x4df944u;
    // NOP
label_4df948:
    // 0x4df948: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4df948u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4df94c: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4df94cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4df950: 0x26680124  addiu       $t0, $s3, 0x124
    ctx->pc = 0x4df950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4df954: 0x2669012c  addiu       $t1, $s3, 0x12C
    ctx->pc = 0x4df954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
label_4df958:
    // 0x4df958: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4df958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4df95c: 0x26d0115c  addiu       $s0, $s6, 0x115C
    ctx->pc = 0x4df95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4444));
    // 0x4df960: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x4df960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4df964: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x4df964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4df968: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4df968u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4df96c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4df96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df970: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4df970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4df974: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df978: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4df978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4df97c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4df97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4df980: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4df980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4df984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4df984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df988: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4df988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df98c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4df98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4df990: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DF990u;
    SET_GPR_U32(ctx, 31, 0x4DF998u);
    ctx->pc = 0x4DF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF990u;
    // 0x4df994: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DF990u, 0x4DF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF998u;
label_4df998:
    // 0x4df998: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DF998u;
    SET_GPR_U32(ctx, 31, 0x4DF9A0u);
    ctx->pc = 0x4DF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF998u;
    // 0x4df99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DF998u, 0x4DF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF9A0u;
label_4df9a0:
    // 0x4df9a0: 0x26640130  addiu       $a0, $s3, 0x130
    ctx->pc = 0x4df9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x4df9a4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4df9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4df9a8: 0x26660134  addiu       $a2, $s3, 0x134
    ctx->pc = 0x4df9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 308));
    // 0x4df9ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4df9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4df9b0: 0x266c0014  addiu       $t4, $s3, 0x14
    ctx->pc = 0x4df9b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4df9b4: 0x27c51148  addiu       $a1, $fp, 0x1148
    ctx->pc = 0x4df9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4df9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4df9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4df9bc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4df9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df9c0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4df9c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df9c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4df9c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df9c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4df9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4df9cc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4df9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df9d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4df9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4df9d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4df9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4df9d8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4df9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4df9dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4df9dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4df9e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df9e4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4df9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4df9e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df9ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4df9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4df9f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df9f4: 0x8664011e  lh          $a0, 0x11E($s3)
    ctx->pc = 0x4df9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 286)));
    // 0x4df9f8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4df9f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4df9fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4df9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4dfa00: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4dfa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4dfa04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dfa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dfa08: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dfa0c: 0x542024  and         $a0, $v0, $s4
    ctx->pc = 0x4dfa0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4dfa10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfa14: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dfa14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfa18: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x4dfa18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4dfa1c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dfa20: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dfa20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfa24: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DFA24u;
    {
        const bool branch_taken_0x4dfa24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA24u;
        // 0x4dfa28: 0x26e8114c  addiu       $t0, $s7, 0x114C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa24) {
            ctx->pc = 0x4DFA38u;
            goto label_4dfa38;
        }
    }
    ctx->pc = 0x4DFA2Cu;
    // 0x4dfa2c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dfa30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DFA30u;
    {
        const bool branch_taken_0x4dfa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA30u;
        // 0x4dfa34: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa30) {
            ctx->pc = 0x4DFA44u;
            goto label_4dfa44;
        }
    }
    ctx->pc = 0x4DFA38u;
label_4dfa38:
    // 0x4dfa38: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dfa3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dfa40: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4dfa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4dfa44:
    // 0x4dfa44: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dfa44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dfa48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dfa4c: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x4dfa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x4dfa50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4dfa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4dfa54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dfa54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1150u));
    // 0x4dfa58: 0x27cb1148  addiu       $t3, $fp, 0x1148
    ctx->pc = 0x4dfa58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4dfa5c: 0x95670000  lhu         $a3, 0x0($t3)
    ctx->pc = 0x4dfa5cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfa60: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dfa60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dfa64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfa68: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4dfa68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4dfa6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfa70: 0x26ee114c  addiu       $t6, $s7, 0x114C
    ctx->pc = 0x4dfa70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4dfa74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dfa74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dfa78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfa7c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4dfa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4dfa80: 0x26680128  addiu       $t0, $s3, 0x128
    ctx->pc = 0x4dfa80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4dfa84: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dfa84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfa88: 0x24891154  addiu       $t1, $a0, 0x1154
    ctx->pc = 0x4dfa88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4436));
    // 0x4dfa8c: 0x95c60000  lhu         $a2, 0x0($t6)
    ctx->pc = 0x4dfa8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dfa90: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4dfa90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4dfa94: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4dfa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4dfa98: 0x26c7115c  addiu       $a3, $s6, 0x115C
    ctx->pc = 0x4dfa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4444));
    // 0x4dfa9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dfaa0: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4dfaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4dfaa4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfaa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfaa8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4dfaa8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4dfaac: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfab0: 0x25ed1158  addiu       $t5, $t7, 0x1158
    ctx->pc = 0x4dfab0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4440));
    // 0x4dfab4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfab8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dfab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dfabc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfac0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dfac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfac4: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4dfac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4dfac8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dfacc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfaccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfad0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfad4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfad8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dfad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dfadc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfae0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dfae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfae4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dfae8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfaec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfaf0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dfaf4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dfaf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfaf8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dfaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dfafc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dfb00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfb04: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dfb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dfb08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfb0c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4dfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4dfb10: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4dfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dfb14: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4dfb14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfb18: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dfb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4dfb1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dfb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfb20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfb20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfb24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4dfb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4dfb28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfb2c: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4dfb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4dfb30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4dfb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4dfb34: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dfb34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dfb38: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dfb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfb3c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4dfb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dfb40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dfb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dfb44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfb48: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dfb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dfb4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfb50: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dfb54: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4dfb54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4dfb58: 0x8c461164  lw          $a2, 0x1164($v0)
    ctx->pc = 0x4dfb58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1164u));
    // 0x4dfb5c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dfb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfb60: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4dfb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4dfb64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dfb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfb68: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dfb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4dfb6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfb6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfb70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfb74: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4dfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dfb78: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dfb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dfb7c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dfb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dfb80: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dfb80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dfb84: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dfb84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dfb88: 0xa6630132  sh          $v1, 0x132($s3)
    ctx->pc = 0x4dfb88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dfb8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4dfb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dfb90: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4dfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dfb94: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dfb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4dfb98: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4dfb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dfb9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfb9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfba0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfba4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfba8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfbac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfbb0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4dfbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4dfbb4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4dfbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dfbb8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dfbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4dfbbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfbbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfbc0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfbc4: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x4dfbc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfbc8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4dfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4dfbcc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4dfbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfbd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfbd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfbd8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4dfbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dfbdc: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4dfbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4dfbe0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dfbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4dfbe4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4dfbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4dfbe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfbec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfbecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfbf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dfbf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dfbf4: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4dfbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfbf8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfbfc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4dfbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4dfc00: 0x85a60000  lh          $a2, 0x0($t5)
    ctx->pc = 0x4dfc00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dfc04: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4dfc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4dfc08: 0x95a80000  lhu         $t0, 0x0($t5)
    ctx->pc = 0x4dfc08u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dfc0c: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4dfc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4dfc10: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4dfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4dfc14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4dfc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4dfc18: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4dfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4dfc1c: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4dfc1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfc20: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4dfc20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4dfc24: 0x4c30007  bgezl       $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DFC24u;
    {
        const bool branch_taken_0x4dfc24 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4dfc24) {
            ctx->pc = 0x4DFC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFC24u;
            // 0x4dfc28: 0x8d830000  lw          $v1, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFC44u;
            goto label_4dfc44;
        }
    }
    ctx->pc = 0x4DFC2Cu;
    // 0x4dfc2c: 0x12a1024  and         $v0, $t1, $t2
    ctx->pc = 0x4dfc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x4dfc30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4dfc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dfc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4dfc38: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4dfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4dfc3c: 0x95a80000  lhu         $t0, 0x0($t5)
    ctx->pc = 0x4dfc3cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dfc40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4dfc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4dfc44:
    // 0x4dfc44: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x4dfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4dfc48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfc4c: 0x266d0118  addiu       $t5, $s3, 0x118
    ctx->pc = 0x4dfc4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x4dfc50: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dfc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dfc54: 0x2675011c  addiu       $s5, $s3, 0x11C
    ctx->pc = 0x4dfc54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x4dfc58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfc5c: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x4dfc5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfc60: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4dfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4dfc64: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4dfc64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4dfc68: 0xa5a00000  sh          $zero, 0x0($t5)
    ctx->pc = 0x4dfc68u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dfc6c: 0x27d21148  addiu       $s2, $fp, 0x1148
    ctx->pc = 0x4dfc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4dfc70: 0x26f1114c  addiu       $s1, $s7, 0x114C
    ctx->pc = 0x4dfc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4dfc74: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4dfc74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4dfc78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4dfc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dfc7c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4dfc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfc80: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4dfc80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4dfc84: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfc88: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4dfc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dfc8c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfc90: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dfc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfc94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dfc94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dfc98: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4dfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4dfc9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfca0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4dfca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4dfca4: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4dfca4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfca8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfcac: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4dfcacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4dfcb0: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4dfcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4dfcb4: 0xca2824  and         $a1, $a2, $t2
    ctx->pc = 0x4dfcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4dfcb8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dfcb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dfcbc: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4dfcbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dfcc0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4dfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dfcc4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dfcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dfcc8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dfcc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dfccc: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4dfcccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4dfcd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfcd4: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4dfcd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfcd8: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4dfcdc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dfcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dfce0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dfce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfce4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4dfce4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4dfce8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfcec: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4dfcecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfcf0: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4dfcf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfcf4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4dfcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4dfcf8: 0xa2300a  movz        $a2, $a1, $v0
    ctx->pc = 0x4dfcf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x4dfcfc: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4dfcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4dfd00: 0xca4024  and         $t0, $a2, $t2
    ctx->pc = 0x4dfd00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4dfd04: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dfd04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dfd08: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4dfd08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dfd0c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4dfd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4dfd10: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4dfd10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4dfd14: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dfd18: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4dfd18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4dfd1c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dfd1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dfd20: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4dfd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4dfd24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dfd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dfd28: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4dfd28u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4dfd2c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfd30: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4dfd30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfd34: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4dfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dfd38: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dfd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dfd3c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dfd3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfd40: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4dfd40u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4dfd44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfd48: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4dfd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfd4c: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x4dfd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x4dfd50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dfd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dfd54: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dfd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfd58: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4dfd58u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4dfd5c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4dfd5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dfd60: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dfd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfd64: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x4dfd64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4dfd68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4dfd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfd6c: 0x103300a  movz        $a2, $t0, $v1
    ctx->pc = 0x4dfd6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x4dfd70: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4dfd70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4dfd74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfd78: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x4dfd78u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dfd7c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4dfd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4dfd80: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x4dfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4dfd84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dfd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dfd88: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x4dfd88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dfd8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfd8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfd90: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dfd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dfd94: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dfd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfd98: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4dfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4dfd9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dfd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dfda0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dfda0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfda4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4dfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4dfda8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dfda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dfdac: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x4dfdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dfdb0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dfdb4: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4dfdb4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfdb8: 0x2ca22000  sltiu       $v0, $a1, 0x2000
    ctx->pc = 0x4dfdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x4dfdbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DFDBCu;
    {
        const bool branch_taken_0x4dfdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfdbc) {
            ctx->pc = 0x4DFDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFDBCu;
            // 0x4dfdc0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFDE0u;
            goto label_4dfde0;
        }
    }
    ctx->pc = 0x4DFDC4u;
    // 0x4dfdc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dfdc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfdcc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4dfdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4dfdd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfdd4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dfdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dfdd8: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4dfdd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfddc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4dfddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dfde0:
    // 0x4dfde0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4dfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4dfde4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4dfde4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4dfde8: 0x26700120  addiu       $s0, $s3, 0x120
    ctx->pc = 0x4dfde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4dfdec: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dfdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dfdf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfdf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfdf8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dfdfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfe00: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dfe00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfe04: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4dfe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4dfe08: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dfe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dfe0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfe0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfe10: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dfe14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfe14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfe18: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dfe18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfe1c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4dfe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4dfe20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dfe20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dfe24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dfe24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dfe28: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dfe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dfe2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfe30: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dfe30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dfe34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dfe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dfe38: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dfe38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfe3c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4dfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4dfe40: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dfe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dfe44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dfe44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dfe48: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dfe4c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dfe4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfe50: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4dfe50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dfe54: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4dfe54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dfe58: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dfe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfe5c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4dfe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4dfe60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfe64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dfe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dfe68: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dfe68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dfe6c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DFE6Cu;
    SET_GPR_U32(ctx, 31, 0x4DFE74u);
    ctx->pc = 0x4DFE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFE6Cu;
    // 0x4dfe70: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DFE6Cu, 0x4DFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFE74u;
label_4dfe74:
    // 0x4dfe74: 0x541824  and         $v1, $v0, $s4
    ctx->pc = 0x4dfe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4dfe78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4dfe7c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4dfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4dfe80: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4dfe80u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dfe84: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dfe84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dfe88: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4dfe88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dfe8c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4dfe8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4dfe90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dfe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfe94: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4dfe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4dfe98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfe9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dfe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dfea0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dfea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dfea4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DFEA4u;
    SET_GPR_U32(ctx, 31, 0x4DFEACu);
    ctx->pc = 0x4DFEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFEA4u;
    // 0x4dfea8: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DFEA4u, 0x4DFEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFEACu;
label_4dfeac:
    // 0x4dfeac: 0x541824  and         $v1, $v0, $s4
    ctx->pc = 0x4dfeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4dfeb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dfeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4dfeb4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4dfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4dfeb8: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4dfeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dfebc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dfebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dfec0: 0xa6620028  sh          $v0, 0x28($s3)
    ctx->pc = 0x4dfec0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dfec4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4dfec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dfec8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dfecc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4dfeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4dfed0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dfed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dfed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dfed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dfed8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dfed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dfedc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DFEDCu;
    SET_GPR_U32(ctx, 31, 0x4DFEE4u);
    ctx->pc = 0x4DFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFEDCu;
    // 0x4dfee0: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DFEDCu, 0x4DFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFEE4u;
label_4dfee4:
    // 0x4dfee4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4dfee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4dfee8: 0x541824  and         $v1, $v0, $s4
    ctx->pc = 0x4dfee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4dfeec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4dfef0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4dfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4dfef4: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4dfef4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4dfef8: 0xa663002a  sh          $v1, 0x2A($s3)
    ctx->pc = 0x4dfef8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dfefc: 0x248a1154  addiu       $t2, $a0, 0x1154
    ctx->pc = 0x4dfefcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4436));
    // 0x4dff00: 0x25e91158  addiu       $t1, $t7, 0x1158
    ctx->pc = 0x4dff00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4440));
    // 0x4dff04: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4dff04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4dff08: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dff08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dff0c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4dff0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4dff10: 0x34e70433  ori         $a3, $a3, 0x433
    ctx->pc = 0x4dff10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1075);
    // 0x4dff14: 0x350804b6  ori         $t0, $t0, 0x4B6
    ctx->pc = 0x4dff14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1206);
    // 0x4dff18: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x4dff18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dff1c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4dff1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dff20: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4dff20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dff24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4dff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dff28: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4dff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dff2c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4dff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1158u));
    // 0x4dff30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dff30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dff34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dff38: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4dff38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4dff3c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4dff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4dff40: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4dff40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4dff44: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4DFF44u;
    SET_GPR_U32(ctx, 31, 0x4DFF4Cu);
    ctx->pc = 0x4DFF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFF44u;
    // 0x4dff48: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4DFF44u, 0x4DFF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFF4Cu;
label_4dff4c:
    // 0x4dff4c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4dff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4dff50: 0x24c61160  addiu       $a2, $a2, 0x1160
    ctx->pc = 0x4dff50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4448));
    // 0x4dff54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4dff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4dff58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dff58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1160u));
    // 0x4dff5c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4dff5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4dff60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4dff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dff64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dff68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dff6c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4dff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4dff70: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4DFF70u;
    SET_GPR_U32(ctx, 31, 0x4DFF78u);
    ctx->pc = 0x4DFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFF70u;
    // 0x4dff74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4DFF70u, 0x4DFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFF78u;
label_4dff78:
    // 0x4dff78: 0xc12b34c  jal         func_4ACD30
    ctx->pc = 0x4DFF78u;
    SET_GPR_U32(ctx, 31, 0x4DFF80u);
    ctx->pc = 0x4DFF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFF78u;
    // 0x4dff7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD30u, 0x4DFF78u, 0x4DFF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFF80u;
label_4dff80:
    // 0x4dff80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dff84: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4dff84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4dff88: 0x2664015e  addiu       $a0, $s3, 0x15E
    ctx->pc = 0x4dff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4dff8c: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x4dff8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x4dff90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dff94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dff98: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dff98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dff9c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4dff9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dffa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4dffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4dffa4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4dffa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dffa8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dffa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dffac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4dffacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dffb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dffb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dffb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dffb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dffbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dffbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dffc0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dffc4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dffc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dffc8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4dffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4dffcc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dffccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dffd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DFFD0u;
    {
        const bool branch_taken_0x4dffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dffd0) {
            ctx->pc = 0x4DFFE0u;
            goto label_4dffe0;
        }
    }
    ctx->pc = 0x4DFFD8u;
    // 0x4dffd8: 0xc138028  jal         func_4E00A0
    ctx->pc = 0x4DFFD8u;
    SET_GPR_U32(ctx, 31, 0x4DFFE0u);
    ctx->pc = 0x4DFFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFFD8u;
    // 0x4dffdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E00A0u, 0x4DFFD8u, 0x4DFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFFE0u;
label_4dffe0:
    // 0x4dffe0: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4DFFE0u;
    SET_GPR_U32(ctx, 31, 0x4DFFE8u);
    ctx->pc = 0x4DFFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFFE0u;
    // 0x4dffe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4DFFE0u, 0x4DFFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFFE8u;
label_4dffe8:
    // 0x4dffe8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4DFFE8u;
    {
        const bool branch_taken_0x4dffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFE8u;
        // 0x4dffec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dffe8) {
            ctx->pc = 0x4E0070u;
            return;
        }
    }
    ctx->pc = 0x4DFFF0u;
    // 0x4dfff0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4DFFF0u;
    SET_GPR_U32(ctx, 31, 0x4DFFF8u);
    ctx->pc = 0x4DFFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFFF0u;
    // 0x4dfff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4DFFF0u, 0x4DFFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFFF8u;
label_4dfff8:
    // 0x4dfff8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4DFFF8u;
    {
        const bool branch_taken_0x4dfff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFF8u;
        // 0x4dfffc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfff8) {
            ctx->pc = 0x4E0070u;
            return;
        }
    }
    ctx->pc = 0x4E0000u;
    // 0x4e0000: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4e0000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e0004: 0x2462d680  addiu       $v0, $v1, -0x2980
    ctx->pc = 0x4e0004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4e0008: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x4e0008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4e000c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4e000cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4e0010: 0xa66001b6  sh          $zero, 0x1B6($s3)
    ctx->pc = 0x4e0010u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0014: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4e0014u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e0018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e001c: 0xa44523c4  sh          $a1, 0x23C4($v0)
    ctx->pc = 0x4e001cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e0020: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4E0020u;
    SET_GPR_U32(ctx, 31, 0x4E0028u);
    ctx->pc = 0x4E0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0020u;
    // 0x4e0024: 0xa446232c  sh          $a2, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4E0020u, 0x4E0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0028u;
label_4e0028:
    // 0x4e0028: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E0028u;
    SET_GPR_U32(ctx, 31, 0x4E0030u);
    ctx->pc = 0x4E002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0028u;
    // 0x4e002c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E0028u, 0x4E0030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0030u;
label_4e0030:
    // 0x4e0030: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E0030u;
    SET_GPR_U32(ctx, 31, 0x4E0038u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E0030u, 0x4E0038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0038u;
label_4e0038:
    // 0x4e0038: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4e0038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e003c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0040: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4e0040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0044: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4e0044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e0048: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4e0048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x4e004cu;
}
