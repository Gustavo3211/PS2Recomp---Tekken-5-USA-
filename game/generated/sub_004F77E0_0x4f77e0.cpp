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

// Function: sub_004F77E0
// Address: 0x4f77e0 - 0x4f7c98
void sub_004F77E0_0x4f77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F77E0_0x4f77e0");
#endif

    switch (ctx->pc) {
        case 0x4f7840u: goto label_4f7840;
        case 0x4f7864u: goto label_4f7864;
        case 0x4f7878u: goto label_4f7878;
        case 0x4f78a8u: goto label_4f78a8;
        case 0x4f78b0u: goto label_4f78b0;
        case 0x4f7970u: goto label_4f7970;
        case 0x4f799cu: goto label_4f799c;
        case 0x4f79a4u: goto label_4f79a4;
        case 0x4f7a7cu: goto label_4f7a7c;
        case 0x4f7aa8u: goto label_4f7aa8;
        case 0x4f7ab0u: goto label_4f7ab0;
        case 0x4f7b7cu: goto label_4f7b7c;
        case 0x4f7bb8u: goto label_4f7bb8;
        case 0x4f7c60u: goto label_4f7c60;
        case 0x4f7c78u: goto label_4f7c78;
        default: break;
    }

    ctx->pc = 0x4f77e0u;

label_4f77e0:
    // 0x4f77e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f77e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f77e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f77e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f77e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f77e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f77ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f77ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f77f0: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4f77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f77f4: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x4f77f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4f77f8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f77f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f77fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f7800: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4f7800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f7804: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7804u;
    {
        const bool branch_taken_0x4f7804 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7804u;
        // 0x4f7808: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7804) {
            ctx->pc = 0x4F7820u;
            goto label_4f7820;
        }
    }
    ctx->pc = 0x4F780Cu;
    // 0x4f780c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f780cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f7810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f7814: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F7814u;
    ctx->pc = 0x4F7818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7814u;
    // 0x4f7818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6790u, 0x4F7814u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F781Cu;
    // 0x4f781c: 0x0  nop
    ctx->pc = 0x4f781cu;
    // NOP
label_4f7820:
    // 0x4f7820: 0x86030136  lh          $v1, 0x136($s0)
    ctx->pc = 0x4f7820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x4f7824: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f7824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f7828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f782c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4f782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f7830: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x4f7830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f7834: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4f7834u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f7838: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7838u;
    SET_GPR_U32(ctx, 31, 0x4F7840u);
    ctx->pc = 0x4F783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7838u;
    // 0x4f783c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7838u, 0x4F7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7840u;
label_4f7840:
    // 0x4f7840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7844: 0x960501b6  lhu         $a1, 0x1B6($s0)
    ctx->pc = 0x4f7844u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4f7848: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4f7848u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f784c: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x4f784cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f7850: 0x30a50006  andi        $a1, $a1, 0x6
    ctx->pc = 0x4f7850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x4f7854: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7854u;
    {
        const bool branch_taken_0x4f7854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7854u;
        // 0x4f7858: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7854) {
            ctx->pc = 0x4F7868u;
            goto label_4f7868;
        }
    }
    ctx->pc = 0x4F785Cu;
    // 0x4f785c: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4F785Cu;
    SET_GPR_U32(ctx, 31, 0x4F7864u);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4F785Cu, 0x4F7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7864u;
label_4f7864:
    // 0x4f7864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f7868:
    // 0x4f7868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f7868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f786c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f7870: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4F7870u;
    ctx->pc = 0x4F7874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7870u;
    // 0x4f7874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4F7878u;
label_4f7878:
    // 0x4f7878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f7878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f787c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4f7880: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f7880u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f7884: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4f7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4f7888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f7888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f788c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4f788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4f7890: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f7890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7894: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4f7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4f7898: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f7898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f789c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f78a0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F78A0u;
    SET_GPR_U32(ctx, 31, 0x4F78A8u);
    ctx->pc = 0x4F78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F78A0u;
    // 0x4f78a4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F78A0u, 0x4F78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F78A8u;
label_4f78a8:
    // 0x4f78a8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F78A8u;
    SET_GPR_U32(ctx, 31, 0x4F78B0u);
    ctx->pc = 0x4F78ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F78A8u;
    // 0x4f78ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F78A8u, 0x4F78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F78B0u;
label_4f78b0:
    // 0x4f78b0: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x4f78b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f78b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f78b8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4f78b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f78bc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f78c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f78c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f78c4: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x4f78c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f78c8: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x4f78c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f78cc: 0x30c207ff  andi        $v0, $a2, 0x7FF
    ctx->pc = 0x4f78ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x4f78d0: 0x30c38000  andi        $v1, $a2, 0x8000
    ctx->pc = 0x4f78d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x4f78d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f78d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f78d8: 0x103980b  movn        $s3, $t0, $v1
    ctx->pc = 0x4f78d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 8));
    // 0x4f78dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f78dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f78e0: 0x133c00  sll         $a3, $s3, 16
    ctx->pc = 0x4f78e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f78e4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f78e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f78e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f78ec: 0xa6260024  sh          $a2, 0x24($s1)
    ctx->pc = 0x4f78ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f78f0: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4f78f0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4f78f4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f78f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f78f8: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x4f78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x4f78fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7900: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7904: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f7904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f7908: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f7908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f790c: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f790cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7910: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f7910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7914: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x4f7914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7918: 0x103900a  movz        $s2, $t0, $v1
    ctx->pc = 0x4f7918u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 8));
    // 0x4f791c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4f791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f7920: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7924: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7928: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f792c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f792cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7930: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f7930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f7934: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f7934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f7938: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f7938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f793c: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x4f793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x4f7940: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7944: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7948: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f794c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f794cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7950: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f7950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f7954: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f7954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f7958: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f7958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f795c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4f795cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4f7960: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7964: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7968: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F7968u;
    SET_GPR_U32(ctx, 31, 0x4F7970u);
    ctx->pc = 0x4F796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7968u;
    // 0x4f796c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F7968u, 0x4F7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7970u;
label_4f7970:
    // 0x4f7970: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7974: 0x26260124  addiu       $a2, $s1, 0x124
    ctx->pc = 0x4f7974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f7978: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f7978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f797c: 0x244500ff  addiu       $a1, $v0, 0xFF
    ctx->pc = 0x4f797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4f7980: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4f7980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7984: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4f7984u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4f7988: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4f7988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4f798c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f7990: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7994: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F7994u;
    SET_GPR_U32(ctx, 31, 0x4F799Cu);
    ctx->pc = 0x4F7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7994u;
    // 0x4f7998: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F7994u, 0x4F799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F799Cu;
label_4f799c:
    // 0x4f799c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F799Cu;
    SET_GPR_U32(ctx, 31, 0x4F79A4u);
    ctx->pc = 0x4F79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F799Cu;
    // 0x4f79a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F799Cu, 0x4F79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F79A4u;
label_4f79a4:
    // 0x4f79a4: 0x3669ffff  ori         $t1, $s3, 0xFFFF
    ctx->pc = 0x4f79a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f79a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f79ac: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4f79acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f79b0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f79b4: 0x364affff  ori         $t2, $s2, 0xFFFF
    ctx->pc = 0x4f79b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f79b8: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x4f79b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f79bc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f79c0: 0x2505824  and         $t3, $s2, $s0
    ctx->pc = 0x4f79c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f79c4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4f79c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f79c8: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x4f79c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x4f79cc: 0x2704024  and         $t0, $s3, $s0
    ctx->pc = 0x4f79ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f79d0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f79d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f79d4: 0x30e68000  andi        $a2, $a3, 0x8000
    ctx->pc = 0x4f79d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x4f79d8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f79d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f79dc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4f79dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f79e0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f79e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f79e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f79e8: 0x106980a  movz        $s3, $t0, $a2
    ctx->pc = 0x4f79e8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 8));
    // 0x4f79ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f79ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f79f0: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f79f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f79f4: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f79f8: 0xa6270028  sh          $a3, 0x28($s1)
    ctx->pc = 0x4f79f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f79fc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f79fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f7a00: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x4f7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x4f7a04: 0xa6220026  sh          $v0, 0x26($s1)
    ctx->pc = 0x4f7a04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f7a08: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7a0c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f7a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f7a10: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f7a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f7a14: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f7a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f7a18: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f7a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7a1c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f7a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7a20: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x4f7a20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7a24: 0x163900b  movn        $s2, $t3, $v1
    ctx->pc = 0x4f7a24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 11));
    // 0x4f7a28: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4f7a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f7a2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7a30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7a34: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7a38: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7a3c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f7a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f7a40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f7a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f7a44: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f7a44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7a48: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x4f7a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x4f7a4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7a50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7a50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7a54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7a58: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7a5c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f7a60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f7a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f7a64: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f7a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7a68: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4f7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4f7a6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7a70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f7a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f7a74: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F7A74u;
    SET_GPR_U32(ctx, 31, 0x4F7A7Cu);
    ctx->pc = 0x4F7A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7A74u;
    // 0x4f7a78: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F7A74u, 0x4F7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7A7Cu;
label_4f7a7c:
    // 0x4f7a7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7a80: 0x26260128  addiu       $a2, $s1, 0x128
    ctx->pc = 0x4f7a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f7a84: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f7a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f7a88: 0x244500ff  addiu       $a1, $v0, 0xFF
    ctx->pc = 0x4f7a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4f7a8c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4f7a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7a90: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4f7a90u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4f7a94: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4f7a94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4f7a98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f7a9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7aa0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F7AA0u;
    SET_GPR_U32(ctx, 31, 0x4F7AA8u);
    ctx->pc = 0x4F7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7AA0u;
    // 0x4f7aa4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F7AA0u, 0x4F7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7AA8u;
label_4f7aa8:
    // 0x4f7aa8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F7AA8u;
    SET_GPR_U32(ctx, 31, 0x4F7AB0u);
    ctx->pc = 0x4F7AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7AA8u;
    // 0x4f7aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F7AA8u, 0x4F7AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7AB0u;
label_4f7ab0:
    // 0x4f7ab0: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x4f7ab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f7ab4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7ab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7abc: 0x2703024  and         $a2, $s3, $s0
    ctx->pc = 0x4f7abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f7ac0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4f7ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7ac4: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f7ac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7ac8: 0x3648ffff  ori         $t0, $s2, 0xFFFF
    ctx->pc = 0x4f7ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7acc: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f7accu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7ad0: 0x2504824  and         $t1, $s2, $s0
    ctx->pc = 0x4f7ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f7ad4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x4f7ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x4f7ad8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4f7ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7adc: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7ae0: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x4f7ae0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7ae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7ae8: 0xc5980a  movz        $s3, $a2, $a1
    ctx->pc = 0x4f7ae8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4f7aec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7af0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7af4: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f7af8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f7af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7afc: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f7afcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7b00: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f7b00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f7b04: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x4f7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x4f7b08: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7b10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7b14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7b18: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f7b18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7b1c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f7b1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7b20: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x4f7b20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7b24: 0x125900b  movn        $s2, $t1, $a1
    ctx->pc = 0x4f7b24u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 9));
    // 0x4f7b28: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4f7b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4f7b2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f7b30: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7b30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7b34: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7b38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7b3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7b44: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f7b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7b48: 0x731826  xor         $v1, $v1, $s3
    ctx->pc = 0x4f7b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 19));
    // 0x4f7b4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f7b50: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7b50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f7b54: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7b5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7b60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7b64: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f7b64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7b68: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f7b6c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7b70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7b74: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F7B74u;
    SET_GPR_U32(ctx, 31, 0x4F7B7Cu);
    ctx->pc = 0x4F7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7B74u;
    // 0x4f7b78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F7B74u, 0x4F7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7B7Cu;
label_4f7b7c:
    // 0x4f7b7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7b80: 0x2626012c  addiu       $a2, $s1, 0x12C
    ctx->pc = 0x4f7b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f7b84: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4f7b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f7b88: 0x24070258  addiu       $a3, $zero, 0x258
    ctx->pc = 0x4f7b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4f7b8c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4f7b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7b90: 0x244400ff  addiu       $a0, $v0, 0xFF
    ctx->pc = 0x4f7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4f7b94: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4f7b94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4f7b98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f7b9c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4f7b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4f7ba0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f7ba4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f7ba8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4f7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4f7bac: 0xa627015e  sh          $a3, 0x15E($s1)
    ctx->pc = 0x4f7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f7bb0: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F7BB0u;
    SET_GPR_U32(ctx, 31, 0x4F7BB8u);
    ctx->pc = 0x4F7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7BB0u;
    // 0x4f7bb4: 0x87a50000  lh          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F7BB0u, 0x4F7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7BB8u;
label_4f7bb8:
    // 0x4f7bb8: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f7bb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7bbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7bc0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7bc4: 0x2503024  and         $a2, $s2, $s0
    ctx->pc = 0x4f7bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f7bc8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4f7bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7bcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f7bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7bd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7bd8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f7bdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7be0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x4f7be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7be4: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f7be4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7be8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7bec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7bf0: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x4f7bf0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f7bf4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f7bf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7bfc: 0xc5900a  movz        $s2, $a2, $a1
    ctx->pc = 0x4f7bfcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
    // 0x4f7c00: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f7c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7c04: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7c08: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f7c08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f7c0c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4f7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4f7c10: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7c14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7c18: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f7c1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7c20: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f7c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7c24: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x4f7c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x4f7c28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7c2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f7c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7c30: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7c38: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f7c3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7c40: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f7c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7c44: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f7c48: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7c4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7c50: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f7c54: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f7c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7c58: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F7C58u;
    SET_GPR_U32(ctx, 31, 0x4F7C60u);
    ctx->pc = 0x4F7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7C58u;
    // 0x4f7c5c: 0xa6220136  sh          $v0, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F7C58u, 0x4F7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7C60u;
label_4f7c60:
    // 0x4f7c60: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f7c64: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f7c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f7c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f7c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7c6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f7c70: 0xc13ddf8  jal         func_4F77E0
    ctx->pc = 0x4F7C70u;
    SET_GPR_U32(ctx, 31, 0x4F7C78u);
    ctx->pc = 0x4F7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7C70u;
    // 0x4f7c74: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F77E0u;
    goto label_4f77e0;
    ctx->pc = 0x4F7C78u;
label_4f7c78:
    // 0x4f7c78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f7c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7c7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4f7c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f7c80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4f7c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7c84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4f7c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f7c88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f7c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f7c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F7C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7C8Cu;
        // 0x4f7c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F7C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F7C94u;
    // 0x4f7c94: 0x0  nop
    ctx->pc = 0x4f7c94u;
    // NOP
    ctx->pc = 0x4f7c98u;
}
