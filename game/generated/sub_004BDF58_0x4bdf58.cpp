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

// Function: sub_004BDF58
// Address: 0x4bdf58 - 0x4be208
void sub_004BDF58_0x4bdf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BDF58_0x4bdf58");
#endif

    switch (ctx->pc) {
        case 0x4bdf98u: goto label_4bdf98;
        case 0x4be08cu: goto label_4be08c;
        case 0x4be108u: goto label_4be108;
        default: break;
    }

    ctx->pc = 0x4bdf58u;

    // 0x4bdf58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bdf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4bdf5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bdf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bdf60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bdf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bdf64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4bdf64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdf68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bdf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bdf6c: 0x26b001b4  addiu       $s0, $s5, 0x1B4
    ctx->pc = 0x4bdf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 436));
    // 0x4bdf70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bdf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bdf74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bdf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bdf78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bdf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bdf7c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bdf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bdf80: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4bdf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4bdf84: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4bdf84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bdf88: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BDF88u;
    {
        const bool branch_taken_0x4bdf88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4bdf88) {
            ctx->pc = 0x4BDF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDF88u;
            // 0x4bdf8c: 0x8eb60140  lw          $s6, 0x140($s5) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDFC0u;
            goto label_4bdfc0;
        }
    }
    ctx->pc = 0x4BDF90u;
    // 0x4bdf90: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BDF90u;
    SET_GPR_U32(ctx, 31, 0x4BDF98u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BDF90u, 0x4BDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDF98u;
label_4bdf98:
    // 0x4bdf98: 0x24020499  addiu       $v0, $zero, 0x499
    ctx->pc = 0x4bdf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
    // 0x4bdf9c: 0xa6a2000c  sh          $v0, 0xC($s5)
    ctx->pc = 0x4bdf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bdfa0: 0x26a401b6  addiu       $a0, $s5, 0x1B6
    ctx->pc = 0x4bdfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 438));
    // 0x4bdfa4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bdfa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bdfa8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4bdfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4bdfac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4bdfacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bdfb0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4bdfb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bdfb4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4bdfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4bdfb8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4bdfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bdfbc: 0x8eb60140  lw          $s6, 0x140($s5)
    ctx->pc = 0x4bdfbcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_4bdfc0:
    // 0x4bdfc0: 0x86c201b4  lh          $v0, 0x1B4($s6)
    ctx->pc = 0x4bdfc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x4bdfc4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BDFC4u;
    {
        const bool branch_taken_0x4bdfc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDFC4u;
        // 0x4bdfc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdfc4) {
            ctx->pc = 0x4BDFF8u;
            goto label_4bdff8;
        }
    }
    ctx->pc = 0x4BDFCCu;
    // 0x4bdfcc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bdfccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bdfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bdfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bdfd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bdfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bdfd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bdfd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bdfdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bdfdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bdfe0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bdfe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bdfe4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bdfe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bdfe8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4bdfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bdfec: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BDFECu;
    ctx->pc = 0x4BDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDFECu;
    // 0x4bdff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BDFF4u;
    // 0x4bdff4: 0x0  nop
    ctx->pc = 0x4bdff4u;
    // NOP
label_4bdff8:
    // 0x4bdff8: 0x86c201c2  lh          $v0, 0x1C2($s6)
    ctx->pc = 0x4bdff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 450)));
    // 0x4bdffc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BDFFCu;
    {
        const bool branch_taken_0x4bdffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDFFCu;
        // 0x4be000: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdffc) {
            ctx->pc = 0x4BE010u;
            goto label_4be010;
        }
    }
    ctx->pc = 0x4BE004u;
    // 0x4be004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BE004u;
    {
        const bool branch_taken_0x4be004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE004u;
        // 0x4be008: 0xa6a0000e  sh          $zero, 0xE($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be004) {
            ctx->pc = 0x4BE014u;
            goto label_4be014;
        }
    }
    ctx->pc = 0x4BE00Cu;
    // 0x4be00c: 0x0  nop
    ctx->pc = 0x4be00cu;
    // NOP
label_4be010:
    // 0x4be010: 0xa6a2000e  sh          $v0, 0xE($s5)
    ctx->pc = 0x4be010u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 2));
label_4be014:
    // 0x4be014: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4be014u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4be018: 0x86c20118  lh          $v0, 0x118($s6)
    ctx->pc = 0x4be018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x4be01c: 0x26310e38  addiu       $s1, $s1, 0xE38
    ctx->pc = 0x4be01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3640));
    // 0x4be020: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4be020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4be024: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4be024u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E38u));
    // 0x4be028: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be02c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4be02cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4be030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4be030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be038: 0x26520e44  addiu       $s2, $s2, 0xE44
    ctx->pc = 0x4be038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3652));
    // 0x4be03c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4be040: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4be040u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4be044: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4be044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4be048: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be04c: 0x26940e48  addiu       $s4, $s4, 0xE48
    ctx->pc = 0x4be04cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3656));
    // 0x4be050: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4be050u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4be054: 0x86c50136  lh          $a1, 0x136($s6)
    ctx->pc = 0x4be054u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
    // 0x4be058: 0x26730e4c  addiu       $s3, $s3, 0xE4C
    ctx->pc = 0x4be058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3660));
    // 0x4be05c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4be05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4be060: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4be060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4be064: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be068: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4be06c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4be06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4be070: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4be070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4be074: 0xa6a20118  sh          $v0, 0x118($s5)
    ctx->pc = 0x4be074u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be078: 0x96c3011c  lhu         $v1, 0x11C($s6)
    ctx->pc = 0x4be078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
    // 0x4be07c: 0xa6a3011c  sh          $v1, 0x11C($s5)
    ctx->pc = 0x4be07cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4be080: 0x96c20120  lhu         $v0, 0x120($s6)
    ctx->pc = 0x4be080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 288)));
    // 0x4be084: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BE084u;
    SET_GPR_U32(ctx, 31, 0x4BE08Cu);
    ctx->pc = 0x4BE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE084u;
    // 0x4be088: 0xa6a20120  sh          $v0, 0x120($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 288), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BE084u, 0x4BE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE08Cu;
label_4be08c:
    // 0x4be08c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4be08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be090: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4be090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4be094: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4be094u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4be098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be09c: 0x25290e3c  addiu       $t1, $t1, 0xE3C
    ctx->pc = 0x4be09cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3644));
    // 0x4be0a0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4be0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4be0a4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4be0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4be0a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4be0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4be0ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4be0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be0b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4be0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4be0b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4be0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be0b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4be0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be0bc: 0x86a2015e  lh          $v0, 0x15E($s5)
    ctx->pc = 0x4be0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 350)));
    // 0x4be0c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be0c4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4be0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4be0c8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be0cc: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4be0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4be0d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4be0d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4be0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4be0d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4be0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4be0dc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4be0dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4be0e0: 0x86a20026  lh          $v0, 0x26($s5)
    ctx->pc = 0x4be0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 38)));
    // 0x4be0e4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be0e8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4be0e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4be0ec: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4be0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4be0f0: 0x86a20028  lh          $v0, 0x28($s5)
    ctx->pc = 0x4be0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x4be0f4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be0f8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4be0f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4be0fc: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4be0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4be100: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4BE100u;
    SET_GPR_U32(ctx, 31, 0x4BE108u);
    ctx->pc = 0x4BE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE100u;
    // 0x4be104: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4BE100u, 0x4BE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE108u;
label_4be108:
    // 0x4be108: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4be108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be10c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4be10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4be110: 0x26aa0010  addiu       $t2, $s5, 0x10
    ctx->pc = 0x4be110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4be114: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4be114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be118: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4be118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4be11c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4be11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4be120: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4be120u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4be124: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be128: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4be128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4be12c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4be12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4be130: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4be130u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be134: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4be134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4be138: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4be138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be13c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4be13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4be140: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4be140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4be144: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4be144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4be148: 0x26a40018  addiu       $a0, $s5, 0x18
    ctx->pc = 0x4be148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4be14c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4be14cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4be150: 0x26a90014  addiu       $t1, $s5, 0x14
    ctx->pc = 0x4be150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4be154: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4be154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4be158: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4be158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be15c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4be15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4be160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4be160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be164: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be168: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4be168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4be16c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4be16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4be170: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be174: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4be174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4be178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4be178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be17c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4be17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4be180: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4be180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4be184: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4be184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4be188: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4be188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4be18c: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4be190: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4be190u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4be194: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4be194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4be198: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be19c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4be19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4be1a0: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4be1a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4be1a4: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4be1a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4be1a8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4be1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4be1ac: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4be1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4be1b0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be1b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4be1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4be1b8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4be1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4be1bc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4be1bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4be1c0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4be1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4be1c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4be1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4be1c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4be1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4be1cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be1d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be1d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4be1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4be1d8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4be1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4be1dc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4be1dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4be1e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4be1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4be1e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4be1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4be1e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4be1e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4be1ec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4be1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4be1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be1f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be1f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4be1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4be1fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4be1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4be200: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE200u;
        // 0x4be204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE208u;
}
