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

// Function: sub_0033A4A8
// Address: 0x33a4a8 - 0x33a748
void sub_0033A4A8_0x33a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A4A8_0x33a4a8");
#endif

    switch (ctx->pc) {
        case 0x33a4a8u: goto label_33a4a8;
        case 0x33a4acu: goto label_33a4ac;
        case 0x33a4b0u: goto label_33a4b0;
        case 0x33a4b4u: goto label_33a4b4;
        case 0x33a4b8u: goto label_33a4b8;
        case 0x33a4bcu: goto label_33a4bc;
        case 0x33a4c0u: goto label_33a4c0;
        case 0x33a4c4u: goto label_33a4c4;
        case 0x33a4c8u: goto label_33a4c8;
        case 0x33a4ccu: goto label_33a4cc;
        case 0x33a4d0u: goto label_33a4d0;
        case 0x33a4d4u: goto label_33a4d4;
        case 0x33a4d8u: goto label_33a4d8;
        case 0x33a4dcu: goto label_33a4dc;
        case 0x33a4e0u: goto label_33a4e0;
        case 0x33a4e4u: goto label_33a4e4;
        case 0x33a4e8u: goto label_33a4e8;
        case 0x33a4ecu: goto label_33a4ec;
        case 0x33a4f0u: goto label_33a4f0;
        case 0x33a4f4u: goto label_33a4f4;
        case 0x33a4f8u: goto label_33a4f8;
        case 0x33a4fcu: goto label_33a4fc;
        case 0x33a500u: goto label_33a500;
        case 0x33a504u: goto label_33a504;
        case 0x33a508u: goto label_33a508;
        case 0x33a50cu: goto label_33a50c;
        case 0x33a510u: goto label_33a510;
        case 0x33a514u: goto label_33a514;
        case 0x33a518u: goto label_33a518;
        case 0x33a51cu: goto label_33a51c;
        case 0x33a520u: goto label_33a520;
        case 0x33a524u: goto label_33a524;
        case 0x33a528u: goto label_33a528;
        case 0x33a52cu: goto label_33a52c;
        case 0x33a530u: goto label_33a530;
        case 0x33a534u: goto label_33a534;
        case 0x33a538u: goto label_33a538;
        case 0x33a53cu: goto label_33a53c;
        case 0x33a540u: goto label_33a540;
        case 0x33a544u: goto label_33a544;
        case 0x33a548u: goto label_33a548;
        case 0x33a54cu: goto label_33a54c;
        case 0x33a550u: goto label_33a550;
        case 0x33a554u: goto label_33a554;
        case 0x33a558u: goto label_33a558;
        case 0x33a55cu: goto label_33a55c;
        case 0x33a560u: goto label_33a560;
        case 0x33a564u: goto label_33a564;
        case 0x33a568u: goto label_33a568;
        case 0x33a56cu: goto label_33a56c;
        case 0x33a570u: goto label_33a570;
        case 0x33a574u: goto label_33a574;
        case 0x33a578u: goto label_33a578;
        case 0x33a57cu: goto label_33a57c;
        case 0x33a580u: goto label_33a580;
        case 0x33a584u: goto label_33a584;
        case 0x33a588u: goto label_33a588;
        case 0x33a58cu: goto label_33a58c;
        case 0x33a590u: goto label_33a590;
        case 0x33a594u: goto label_33a594;
        case 0x33a598u: goto label_33a598;
        case 0x33a59cu: goto label_33a59c;
        case 0x33a5a0u: goto label_33a5a0;
        case 0x33a5a4u: goto label_33a5a4;
        case 0x33a5a8u: goto label_33a5a8;
        case 0x33a5acu: goto label_33a5ac;
        case 0x33a5b0u: goto label_33a5b0;
        case 0x33a5b4u: goto label_33a5b4;
        case 0x33a5b8u: goto label_33a5b8;
        case 0x33a5bcu: goto label_33a5bc;
        case 0x33a5c0u: goto label_33a5c0;
        case 0x33a5c4u: goto label_33a5c4;
        case 0x33a5c8u: goto label_33a5c8;
        case 0x33a5ccu: goto label_33a5cc;
        case 0x33a5d0u: goto label_33a5d0;
        case 0x33a5d4u: goto label_33a5d4;
        case 0x33a5d8u: goto label_33a5d8;
        case 0x33a5dcu: goto label_33a5dc;
        case 0x33a5e0u: goto label_33a5e0;
        case 0x33a5e4u: goto label_33a5e4;
        case 0x33a5e8u: goto label_33a5e8;
        case 0x33a5ecu: goto label_33a5ec;
        case 0x33a5f0u: goto label_33a5f0;
        case 0x33a5f4u: goto label_33a5f4;
        case 0x33a5f8u: goto label_33a5f8;
        case 0x33a5fcu: goto label_33a5fc;
        case 0x33a600u: goto label_33a600;
        case 0x33a604u: goto label_33a604;
        case 0x33a608u: goto label_33a608;
        case 0x33a60cu: goto label_33a60c;
        case 0x33a610u: goto label_33a610;
        case 0x33a614u: goto label_33a614;
        case 0x33a618u: goto label_33a618;
        case 0x33a61cu: goto label_33a61c;
        case 0x33a620u: goto label_33a620;
        case 0x33a624u: goto label_33a624;
        case 0x33a628u: goto label_33a628;
        case 0x33a62cu: goto label_33a62c;
        case 0x33a630u: goto label_33a630;
        case 0x33a634u: goto label_33a634;
        case 0x33a638u: goto label_33a638;
        case 0x33a63cu: goto label_33a63c;
        case 0x33a640u: goto label_33a640;
        case 0x33a644u: goto label_33a644;
        case 0x33a648u: goto label_33a648;
        case 0x33a64cu: goto label_33a64c;
        case 0x33a650u: goto label_33a650;
        case 0x33a654u: goto label_33a654;
        case 0x33a658u: goto label_33a658;
        case 0x33a65cu: goto label_33a65c;
        case 0x33a660u: goto label_33a660;
        case 0x33a664u: goto label_33a664;
        case 0x33a668u: goto label_33a668;
        case 0x33a66cu: goto label_33a66c;
        case 0x33a670u: goto label_33a670;
        case 0x33a674u: goto label_33a674;
        case 0x33a678u: goto label_33a678;
        case 0x33a67cu: goto label_33a67c;
        case 0x33a680u: goto label_33a680;
        case 0x33a684u: goto label_33a684;
        case 0x33a688u: goto label_33a688;
        case 0x33a68cu: goto label_33a68c;
        case 0x33a690u: goto label_33a690;
        case 0x33a694u: goto label_33a694;
        case 0x33a698u: goto label_33a698;
        case 0x33a69cu: goto label_33a69c;
        case 0x33a6a0u: goto label_33a6a0;
        case 0x33a6a4u: goto label_33a6a4;
        case 0x33a6a8u: goto label_33a6a8;
        case 0x33a6acu: goto label_33a6ac;
        case 0x33a6b0u: goto label_33a6b0;
        case 0x33a6b4u: goto label_33a6b4;
        case 0x33a6b8u: goto label_33a6b8;
        case 0x33a6bcu: goto label_33a6bc;
        case 0x33a6c0u: goto label_33a6c0;
        case 0x33a6c4u: goto label_33a6c4;
        case 0x33a6c8u: goto label_33a6c8;
        case 0x33a6ccu: goto label_33a6cc;
        case 0x33a6d0u: goto label_33a6d0;
        case 0x33a6d4u: goto label_33a6d4;
        case 0x33a6d8u: goto label_33a6d8;
        case 0x33a6dcu: goto label_33a6dc;
        case 0x33a6e0u: goto label_33a6e0;
        case 0x33a6e4u: goto label_33a6e4;
        case 0x33a6e8u: goto label_33a6e8;
        case 0x33a6ecu: goto label_33a6ec;
        case 0x33a6f0u: goto label_33a6f0;
        case 0x33a6f4u: goto label_33a6f4;
        case 0x33a6f8u: goto label_33a6f8;
        case 0x33a6fcu: goto label_33a6fc;
        case 0x33a700u: goto label_33a700;
        case 0x33a704u: goto label_33a704;
        case 0x33a708u: goto label_33a708;
        case 0x33a70cu: goto label_33a70c;
        case 0x33a710u: goto label_33a710;
        case 0x33a714u: goto label_33a714;
        case 0x33a718u: goto label_33a718;
        case 0x33a71cu: goto label_33a71c;
        case 0x33a720u: goto label_33a720;
        case 0x33a724u: goto label_33a724;
        case 0x33a728u: goto label_33a728;
        case 0x33a72cu: goto label_33a72c;
        case 0x33a730u: goto label_33a730;
        case 0x33a734u: goto label_33a734;
        case 0x33a738u: goto label_33a738;
        case 0x33a73cu: goto label_33a73c;
        case 0x33a740u: goto label_33a740;
        case 0x33a744u: goto label_33a744;
        default: break;
    }

    ctx->pc = 0x33a4a8u;

label_33a4a8:
    // 0x33a4a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33a4ac:
    // 0x33a4ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33a4b0:
    // 0x33a4b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x33a4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33a4b4:
    // 0x33a4b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33a4b8:
    // 0x33a4b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_33a4bc:
    // 0x33a4bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x33a4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33a4c0:
    // 0x33a4c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_33a4c4:
    // 0x33a4c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33a4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a4c8:
    // 0x33a4c8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_33a4cc:
    // 0x33a4cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x33a4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a4d0:
    // 0x33a4d0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x33a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_33a4d4:
    // 0x33a4d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x33a4d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a4d8:
    // 0x33a4d8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x33a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_33a4dc:
    // 0x33a4dc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33a4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_33a4e0:
    // 0x33a4e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_33a4e4:
    // 0x33a4e4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x33a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_33a4e8:
    // 0x33a4e8: 0xc0c8864  jal         func_322190
label_33a4ec:
    if (ctx->pc == 0x33A4ECu) {
        ctx->pc = 0x33A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4E8u;
        // 0x33a4ec: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A4F0u;
        goto label_33a4f0;
    }
    ctx->pc = 0x33A4E8u;
    SET_GPR_U32(ctx, 31, 0x33A4F0u);
    ctx->pc = 0x33A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A4E8u;
    // 0x33a4ec: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x33A4E8u, 0x33A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A4F0u;
label_33a4f0:
    // 0x33a4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a4f4:
    // 0x33a4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a4f8:
    // 0x33a4f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_33a4fc:
    // 0x33a4fc: 0xc0c775c  jal         func_31DD70
label_33a500:
    if (ctx->pc == 0x33A500u) {
        ctx->pc = 0x33A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4FCu;
        // 0x33a500: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A504u;
        goto label_33a504;
    }
    ctx->pc = 0x33A4FCu;
    SET_GPR_U32(ctx, 31, 0x33A504u);
    ctx->pc = 0x33A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A4FCu;
    // 0x33a500: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD70u, 0x33A4FCu, 0x33A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A504u;
label_33a504:
    // 0x33a504: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_33a508:
    if (ctx->pc == 0x33A508u) {
        ctx->pc = 0x33A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A504u;
        // 0x33a508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A50Cu;
        goto label_33a50c;
    }
    ctx->pc = 0x33A504u;
    {
        const bool branch_taken_0x33a504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A504u;
        // 0x33a508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a504) {
            ctx->pc = 0x33A5ECu;
            goto label_33a5ec;
        }
    }
    ctx->pc = 0x33A50Cu;
label_33a50c:
    // 0x33a50c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a510:
    // 0x33a510: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x33a510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_33a514:
    // 0x33a514: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a518:
    // 0x33a518: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x33a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_33a51c:
    // 0x33a51c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33a51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a520:
    // 0x33a520: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a524:
    // 0x33a524: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a528:
    // 0x33a528: 0x40f809  jalr        $v0
label_33a52c:
    if (ctx->pc == 0x33A52Cu) {
        ctx->pc = 0x33A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A528u;
        // 0x33a52c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A530u;
        goto label_33a530;
    }
    ctx->pc = 0x33A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A530u);
        ctx->pc = 0x33A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A528u;
        // 0x33a52c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A528u, 0x33A530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A530u;
label_33a530:
    // 0x33a530: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_33a534:
    if (ctx->pc == 0x33A534u) {
        ctx->pc = 0x33A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A530u;
        // 0x33a534: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A538u;
        goto label_33a538;
    }
    ctx->pc = 0x33A530u;
    {
        const bool branch_taken_0x33a530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A530u;
        // 0x33a534: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a530) {
            ctx->pc = 0x33A568u;
            goto label_33a568;
        }
    }
    ctx->pc = 0x33A538u;
label_33a538:
    // 0x33a538: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a53c:
    // 0x33a53c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33a53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a540:
    // 0x33a540: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33a540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a544:
    // 0x33a544: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x33a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_33a548:
    // 0x33a548: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a54c:
    // 0x33a54c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a550:
    // 0x33a550: 0x40f809  jalr        $v0
label_33a554:
    if (ctx->pc == 0x33A554u) {
        ctx->pc = 0x33A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A550u;
        // 0x33a554: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A558u;
        goto label_33a558;
    }
    ctx->pc = 0x33A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A558u);
        ctx->pc = 0x33A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A550u;
        // 0x33a554: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A550u, 0x33A558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A558u;
label_33a558:
    // 0x33a558: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_33a55c:
    if (ctx->pc == 0x33A55Cu) {
        ctx->pc = 0x33A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A558u;
        // 0x33a55c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A560u;
        goto label_33a560;
    }
    ctx->pc = 0x33A558u;
    {
        const bool branch_taken_0x33a558 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x33A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A558u;
        // 0x33a55c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a558) {
            ctx->pc = 0x33A5A8u;
            goto label_33a5a8;
        }
    }
    ctx->pc = 0x33A560u;
label_33a560:
    // 0x33a560: 0x1000006d  b           . + 4 + (0x6D << 2)
label_33a564:
    if (ctx->pc == 0x33A564u) {
        ctx->pc = 0x33A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A560u;
        // 0x33a564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A568u;
        goto label_33a568;
    }
    ctx->pc = 0x33A560u;
    {
        const bool branch_taken_0x33a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A560u;
        // 0x33a564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a560) {
            ctx->pc = 0x33A718u;
            goto label_33a718;
        }
    }
    ctx->pc = 0x33A568u;
label_33a568:
    // 0x33a568: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33a568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33a56c:
    // 0x33a56c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x33a56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_33a570:
    // 0x33a570: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x33a570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_33a574:
    // 0x33a574: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
label_33a578:
    if (ctx->pc == 0x33A578u) {
        ctx->pc = 0x33A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A574u;
        // 0x33a578: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A57Cu;
        goto label_33a57c;
    }
    ctx->pc = 0x33A574u;
    {
        const bool branch_taken_0x33a574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a574) {
            ctx->pc = 0x33A578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A574u;
            // 0x33a578: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A5D8u;
            goto label_33a5d8;
        }
    }
    ctx->pc = 0x33A57Cu;
label_33a57c:
    // 0x33a57c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a580:
    // 0x33a580: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a584:
    // 0x33a584: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33a584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a588:
    // 0x33a588: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33a588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a58c:
    // 0x33a58c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x33a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_33a590:
    // 0x33a590: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a594:
    // 0x33a594: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a598:
    // 0x33a598: 0x40f809  jalr        $v0
label_33a59c:
    if (ctx->pc == 0x33A59Cu) {
        ctx->pc = 0x33A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A598u;
        // 0x33a59c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5A0u;
        goto label_33a5a0;
    }
    ctx->pc = 0x33A598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A5A0u);
        ctx->pc = 0x33A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A598u;
        // 0x33a59c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A598u, 0x33A5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A5A0u;
label_33a5a0:
    // 0x33a5a0: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
label_33a5a4:
    if (ctx->pc == 0x33A5A4u) {
        ctx->pc = 0x33A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5A0u;
        // 0x33a5a4: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5A8u;
        goto label_33a5a8;
    }
    ctx->pc = 0x33A5A0u;
    {
        const bool branch_taken_0x33a5a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5A0u;
        // 0x33a5a4: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5a0) {
            ctx->pc = 0x33A688u;
            goto label_33a688;
        }
    }
    ctx->pc = 0x33A5A8u;
label_33a5a8:
    // 0x33a5a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33a5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a5ac:
    // 0x33a5ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a5b0:
    // 0x33a5b0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x33a5b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a5b4:
    // 0x33a5b4: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x33a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_33a5b8:
    // 0x33a5b8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x33a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_33a5bc:
    // 0x33a5bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a5c0:
    // 0x33a5c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a5c4:
    // 0x33a5c4: 0x40f809  jalr        $v0
label_33a5c8:
    if (ctx->pc == 0x33A5C8u) {
        ctx->pc = 0x33A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5C4u;
        // 0x33a5c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5CCu;
        goto label_33a5cc;
    }
    ctx->pc = 0x33A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A5CCu);
        ctx->pc = 0x33A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5C4u;
        // 0x33a5c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A5C4u, 0x33A5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A5CCu;
label_33a5cc:
    // 0x33a5cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_33a5d0:
    if (ctx->pc == 0x33A5D0u) {
        ctx->pc = 0x33A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5CCu;
        // 0x33a5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5D4u;
        goto label_33a5d4;
    }
    ctx->pc = 0x33A5CCu;
    {
        const bool branch_taken_0x33a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5CCu;
        // 0x33a5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5cc) {
            ctx->pc = 0x33A5F0u;
            goto label_33a5f0;
        }
    }
    ctx->pc = 0x33A5D4u;
label_33a5d4:
    // 0x33a5d4: 0x0  nop
    ctx->pc = 0x33a5d4u;
    // NOP
label_33a5d8:
    // 0x33a5d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33a5dc:
    // 0x33a5dc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a5e0:
    // 0x33a5e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a5e4:
    // 0x33a5e4: 0x40f809  jalr        $v0
label_33a5e8:
    if (ctx->pc == 0x33A5E8u) {
        ctx->pc = 0x33A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5E4u;
        // 0x33a5e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A5ECu;
        goto label_33a5ec;
    }
    ctx->pc = 0x33A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A5ECu);
        ctx->pc = 0x33A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5E4u;
        // 0x33a5e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A5E4u, 0x33A5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A5ECu;
label_33a5ec:
    // 0x33a5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a5f0:
    // 0x33a5f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x33a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_33a5f4:
    // 0x33a5f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x33a5f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a5f8:
    // 0x33a5f8: 0xc0c7760  jal         func_31DD80
label_33a5fc:
    if (ctx->pc == 0x33A5FCu) {
        ctx->pc = 0x33A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5F8u;
        // 0x33a5fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A600u;
        goto label_33a600;
    }
    ctx->pc = 0x33A5F8u;
    SET_GPR_U32(ctx, 31, 0x33A600u);
    ctx->pc = 0x33A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5F8u;
    // 0x33a5fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD80u, 0x33A5F8u, 0x33A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A600u;
label_33a600:
    // 0x33a600: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_33a604:
    if (ctx->pc == 0x33A604u) {
        ctx->pc = 0x33A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A600u;
        // 0x33a604: 0x27b20004  addiu       $s2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A608u;
        goto label_33a608;
    }
    ctx->pc = 0x33A600u;
    {
        const bool branch_taken_0x33a600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A600u;
        // 0x33a604: 0x27b20004  addiu       $s2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a600) {
            ctx->pc = 0x33A6F0u;
            goto label_33a6f0;
        }
    }
    ctx->pc = 0x33A608u;
label_33a608:
    // 0x33a608: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a60c:
    // 0x33a60c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a610:
    // 0x33a610: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33a610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a614:
    // 0x33a614: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x33a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_33a618:
    // 0x33a618: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x33a618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a61c:
    // 0x33a61c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a61cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a620:
    // 0x33a620: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a624:
    // 0x33a624: 0x40f809  jalr        $v0
label_33a628:
    if (ctx->pc == 0x33A628u) {
        ctx->pc = 0x33A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A624u;
        // 0x33a628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A62Cu;
        goto label_33a62c;
    }
    ctx->pc = 0x33A624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A62Cu);
        ctx->pc = 0x33A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A624u;
        // 0x33a628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A624u, 0x33A62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A62Cu;
label_33a62c:
    // 0x33a62c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33a630:
    if (ctx->pc == 0x33A630u) {
        ctx->pc = 0x33A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A62Cu;
        // 0x33a630: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A634u;
        goto label_33a634;
    }
    ctx->pc = 0x33A62Cu;
    {
        const bool branch_taken_0x33a62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A62Cu;
        // 0x33a630: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a62c) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A634u;
label_33a634:
    // 0x33a634: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a638:
    // 0x33a638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a63c:
    // 0x33a63c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33a63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a640:
    // 0x33a640: 0x1000000b  b           . + 4 + (0xB << 2)
label_33a644:
    if (ctx->pc == 0x33A644u) {
        ctx->pc = 0x33A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A640u;
        // 0x33a644: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A648u;
        goto label_33a648;
    }
    ctx->pc = 0x33A640u;
    {
        const bool branch_taken_0x33a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A640u;
        // 0x33a644: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a640) {
            ctx->pc = 0x33A670u;
            goto label_33a670;
        }
    }
    ctx->pc = 0x33A648u;
label_33a648:
    // 0x33a648: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33a64c:
    // 0x33a64c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x33a64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_33a650:
    // 0x33a650: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x33a650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_33a654:
    // 0x33a654: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
label_33a658:
    if (ctx->pc == 0x33A658u) {
        ctx->pc = 0x33A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A654u;
        // 0x33a658: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A65Cu;
        goto label_33a65c;
    }
    ctx->pc = 0x33A654u;
    {
        const bool branch_taken_0x33a654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a654) {
            ctx->pc = 0x33A658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A654u;
            // 0x33a658: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A6B8u;
            goto label_33a6b8;
        }
    }
    ctx->pc = 0x33A65Cu;
label_33a65c:
    // 0x33a65c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a660:
    // 0x33a660: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33a660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a664:
    // 0x33a664: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a668:
    // 0x33a668: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33a668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a66c:
    // 0x33a66c: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x33a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_33a670:
    // 0x33a670: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a674:
    // 0x33a674: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a678:
    // 0x33a678: 0x40f809  jalr        $v0
label_33a67c:
    if (ctx->pc == 0x33A67Cu) {
        ctx->pc = 0x33A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A678u;
        // 0x33a67c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A680u;
        goto label_33a680;
    }
    ctx->pc = 0x33A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A680u);
        ctx->pc = 0x33A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A678u;
        // 0x33a67c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A678u, 0x33A680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A680u;
label_33a680:
    // 0x33a680: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_33a684:
    if (ctx->pc == 0x33A684u) {
        ctx->pc = 0x33A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A680u;
        // 0x33a684: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A688u;
        goto label_33a688;
    }
    ctx->pc = 0x33A680u;
    {
        const bool branch_taken_0x33a680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x33A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A680u;
        // 0x33a684: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a680) {
            ctx->pc = 0x33A690u;
            goto label_33a690;
        }
    }
    ctx->pc = 0x33A688u;
label_33a688:
    // 0x33a688: 0x10000023  b           . + 4 + (0x23 << 2)
label_33a68c:
    if (ctx->pc == 0x33A68Cu) {
        ctx->pc = 0x33A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A688u;
        // 0x33a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A690u;
        goto label_33a690;
    }
    ctx->pc = 0x33A688u;
    {
        const bool branch_taken_0x33a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A688u;
        // 0x33a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a688) {
            ctx->pc = 0x33A718u;
            goto label_33a718;
        }
    }
    ctx->pc = 0x33A690u;
label_33a690:
    // 0x33a690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a694:
    // 0x33a694: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33a694u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a698:
    // 0x33a698: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x33a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_33a69c:
    // 0x33a69c: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x33a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_33a6a0:
    // 0x33a6a0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a6a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a6a4:
    // 0x33a6a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a6a8:
    // 0x33a6a8: 0x40f809  jalr        $v0
label_33a6ac:
    if (ctx->pc == 0x33A6ACu) {
        ctx->pc = 0x33A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6A8u;
        // 0x33a6ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6B0u;
        goto label_33a6b0;
    }
    ctx->pc = 0x33A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A6B0u);
        ctx->pc = 0x33A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6A8u;
        // 0x33a6ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A6A8u, 0x33A6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A6B0u;
label_33a6b0:
    // 0x33a6b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_33a6b4:
    if (ctx->pc == 0x33A6B4u) {
        ctx->pc = 0x33A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6B0u;
        // 0x33a6b4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6B8u;
        goto label_33a6b8;
    }
    ctx->pc = 0x33A6B0u;
    {
        const bool branch_taken_0x33a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6B0u;
        // 0x33a6b4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6b0) {
            ctx->pc = 0x33A6D0u;
            goto label_33a6d0;
        }
    }
    ctx->pc = 0x33A6B8u;
label_33a6b8:
    // 0x33a6b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33a6bc:
    // 0x33a6bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a6c0:
    // 0x33a6c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a6c4:
    // 0x33a6c4: 0x40f809  jalr        $v0
label_33a6c8:
    if (ctx->pc == 0x33A6C8u) {
        ctx->pc = 0x33A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6C4u;
        // 0x33a6c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6CCu;
        goto label_33a6cc;
    }
    ctx->pc = 0x33A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A6CCu);
        ctx->pc = 0x33A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6C4u;
        // 0x33a6c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A6C4u, 0x33A6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A6CCu;
label_33a6cc:
    // 0x33a6cc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33a6d0:
    // 0x33a6d0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_33a6d4:
    if (ctx->pc == 0x33A6D4u) {
        ctx->pc = 0x33A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6D0u;
        // 0x33a6d4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6D8u;
        goto label_33a6d8;
    }
    ctx->pc = 0x33A6D0u;
    {
        const bool branch_taken_0x33a6d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6D0u;
        // 0x33a6d4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6d0) {
            ctx->pc = 0x33A6F0u;
            goto label_33a6f0;
        }
    }
    ctx->pc = 0x33A6D8u;
label_33a6d8:
    // 0x33a6d8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x33a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_33a6dc:
    // 0x33a6dc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x33a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_33a6e0:
    // 0x33a6e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33a6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33a6e4:
    // 0x33a6e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33a6e8:
    // 0x33a6e8: 0x60f809  jalr        $v1
label_33a6ec:
    if (ctx->pc == 0x33A6ECu) {
        ctx->pc = 0x33A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6E8u;
        // 0x33a6ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6F0u;
        goto label_33a6f0;
    }
    ctx->pc = 0x33A6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33A6F0u);
        ctx->pc = 0x33A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6E8u;
        // 0x33a6ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A6E8u, 0x33A6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A6F0u;
label_33a6f0:
    // 0x33a6f0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x33a6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_33a6f4:
    // 0x33a6f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33a6f8:
    // 0x33a6f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x33a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33a6fc:
    // 0x33a6fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33a6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a700:
    // 0x33a700: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x33a700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33a704:
    // 0x33a704: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x33a704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33a708:
    // 0x33a708: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x33a708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a70c:
    // 0x33a70c: 0xc0ce796  jal         func_339E58
label_33a710:
    if (ctx->pc == 0x33A710u) {
        ctx->pc = 0x33A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A70Cu;
        // 0x33a710: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A714u;
        goto label_33a714;
    }
    ctx->pc = 0x33A70Cu;
    SET_GPR_U32(ctx, 31, 0x33A714u);
    ctx->pc = 0x33A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A70Cu;
    // 0x33a710: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E58u, 0x33A70Cu, 0x33A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A714u;
label_33a714:
    // 0x33a714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a718:
    // 0x33a718: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33a718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33a71c:
    // 0x33a71c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33a71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33a720:
    // 0x33a720: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33a720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a724:
    // 0x33a724: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33a724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33a728:
    // 0x33a728: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33a728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33a72c:
    // 0x33a72c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33a72cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_33a730:
    // 0x33a730: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33a730u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33a734:
    // 0x33a734: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33a734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_33a738:
    // 0x33a738: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x33a738u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33a73c:
    // 0x33a73c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x33a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_33a740:
    // 0x33a740: 0x3e00008  jr          $ra
label_33a744:
    if (ctx->pc == 0x33A744u) {
        ctx->pc = 0x33A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A740u;
        // 0x33a744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A748u;
        goto label_fallthrough_0x33a740;
    }
    ctx->pc = 0x33A740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A740u;
        // 0x33a744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33a740:
    ctx->pc = 0x33A748u;
}
