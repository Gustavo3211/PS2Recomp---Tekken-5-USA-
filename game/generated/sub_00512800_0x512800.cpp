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

// Function: sub_00512800
// Address: 0x512800 - 0x5128f8
void sub_00512800_0x512800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512800_0x512800");
#endif

    switch (ctx->pc) {
        case 0x512800u: goto label_512800;
        case 0x512804u: goto label_512804;
        case 0x512808u: goto label_512808;
        case 0x51280cu: goto label_51280c;
        case 0x512810u: goto label_512810;
        case 0x512814u: goto label_512814;
        case 0x512818u: goto label_512818;
        case 0x51281cu: goto label_51281c;
        case 0x512820u: goto label_512820;
        case 0x512824u: goto label_512824;
        case 0x512828u: goto label_512828;
        case 0x51282cu: goto label_51282c;
        case 0x512830u: goto label_512830;
        case 0x512834u: goto label_512834;
        case 0x512838u: goto label_512838;
        case 0x51283cu: goto label_51283c;
        case 0x512840u: goto label_512840;
        case 0x512844u: goto label_512844;
        case 0x512848u: goto label_512848;
        case 0x51284cu: goto label_51284c;
        case 0x512850u: goto label_512850;
        case 0x512854u: goto label_512854;
        case 0x512858u: goto label_512858;
        case 0x51285cu: goto label_51285c;
        case 0x512860u: goto label_512860;
        case 0x512864u: goto label_512864;
        case 0x512868u: goto label_512868;
        case 0x51286cu: goto label_51286c;
        case 0x512870u: goto label_512870;
        case 0x512874u: goto label_512874;
        case 0x512878u: goto label_512878;
        case 0x51287cu: goto label_51287c;
        case 0x512880u: goto label_512880;
        case 0x512884u: goto label_512884;
        case 0x512888u: goto label_512888;
        case 0x51288cu: goto label_51288c;
        case 0x512890u: goto label_512890;
        case 0x512894u: goto label_512894;
        case 0x512898u: goto label_512898;
        case 0x51289cu: goto label_51289c;
        case 0x5128a0u: goto label_5128a0;
        case 0x5128a4u: goto label_5128a4;
        case 0x5128a8u: goto label_5128a8;
        case 0x5128acu: goto label_5128ac;
        case 0x5128b0u: goto label_5128b0;
        case 0x5128b4u: goto label_5128b4;
        case 0x5128b8u: goto label_5128b8;
        case 0x5128bcu: goto label_5128bc;
        case 0x5128c0u: goto label_5128c0;
        case 0x5128c4u: goto label_5128c4;
        case 0x5128c8u: goto label_5128c8;
        case 0x5128ccu: goto label_5128cc;
        case 0x5128d0u: goto label_5128d0;
        case 0x5128d4u: goto label_5128d4;
        case 0x5128d8u: goto label_5128d8;
        case 0x5128dcu: goto label_5128dc;
        case 0x5128e0u: goto label_5128e0;
        case 0x5128e4u: goto label_5128e4;
        case 0x5128e8u: goto label_5128e8;
        case 0x5128ecu: goto label_5128ec;
        case 0x5128f0u: goto label_5128f0;
        case 0x5128f4u: goto label_5128f4;
        default: break;
    }

    ctx->pc = 0x512800u;

label_512800:
    // 0x512800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x512800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_512804:
    // 0x512804: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x512804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
label_512808:
    // 0x512808: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x512808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_51280c:
    // 0x51280c: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x51280cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
label_512810:
    // 0x512810: 0x2442ca0c  addiu       $v0, $v0, -0x35F4
    ctx->pc = 0x512810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953484));
label_512814:
    // 0x512814: 0x26a3c700  addiu       $v1, $s5, -0x3900
    ctx->pc = 0x512814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952704));
label_512818:
    // 0x512818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_51281c:
    // 0x51281c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x51281cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
label_512820:
    // 0x512820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_512824:
    // 0x512824: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x512824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_512828:
    // 0x512828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x512828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_51282c:
    // 0x51282c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x51282cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_512830:
    // 0x512830: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x512830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_512834:
    // 0x512834: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x512834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512838:
    // 0x512838: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x512838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_51283c:
    // 0x51283c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x51283cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_512840:
    // 0x512840: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x512840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_512844:
    // 0x512844: 0x2490ca04  addiu       $s0, $a0, -0x35FC
    ctx->pc = 0x512844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953476));
label_512848:
    // 0x512848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x512848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_51284c:
    // 0x51284c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x51284cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_512850:
    // 0x512850: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x512850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_512854:
    // 0x512854: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x512854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_512858:
    // 0x512858: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x512858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_51285c:
    // 0x51285c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x51285cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_512860:
    // 0x512860: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x512860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_512864:
    // 0x512864: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x512864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_512868:
    // 0x512868: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x512868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_51286c:
    // 0x51286c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x51286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_512870:
    // 0x512870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x512870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_512874:
    // 0x512874: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x512874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_512878:
    // 0x512878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x512878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_51287c:
    // 0x51287c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x51287cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_512880:
    // 0x512880: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x512880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_512884:
    // 0x512884: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x512884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_512888:
    // 0x512888: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x512888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_51288c:
    // 0x51288c: 0x712024  and         $a0, $v1, $s1
    ctx->pc = 0x51288cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_512890:
    // 0x512890: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x512890u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_512894:
    // 0x512894: 0x14940004  bne         $a0, $s4, . + 4 + (0x4 << 2)
label_512898:
    if (ctx->pc == 0x512898u) {
        ctx->pc = 0x512898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512894u;
        // 0x512898: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x51289Cu;
        goto label_51289c;
    }
    ctx->pc = 0x512894u;
    {
        const bool branch_taken_0x512894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x512898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512894u;
        // 0x512898: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512894) {
            ctx->pc = 0x5128A8u;
            goto label_5128a8;
        }
    }
    ctx->pc = 0x51289Cu;
label_51289c:
    // 0x51289c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x51289cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_5128a0:
    // 0x5128a0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_5128a4:
    if (ctx->pc == 0x5128A4u) {
        ctx->pc = 0x5128A8u;
        goto label_5128a8;
    }
    ctx->pc = 0x5128A0u;
    {
        const bool branch_taken_0x5128a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x5128a0) {
            ctx->pc = 0x5128B8u;
            goto label_5128b8;
        }
    }
    ctx->pc = 0x5128A8u;
label_5128a8:
    // 0x5128a8: 0x60f809  jalr        $v1
label_5128ac:
    if (ctx->pc == 0x5128ACu) {
        ctx->pc = 0x5128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128A8u;
        // 0x5128ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5128B0u;
        goto label_5128b0;
    }
    ctx->pc = 0x5128A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x5128B0u);
        ctx->pc = 0x5128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128A8u;
        // 0x5128ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5128A8u, 0x5128B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5128B0u;
label_5128b0:
    // 0x5128b0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_5128b4:
    if (ctx->pc == 0x5128B4u) {
        ctx->pc = 0x5128B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128B0u;
        // 0x5128b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5128B8u;
        goto label_5128b8;
    }
    ctx->pc = 0x5128B0u;
    {
        const bool branch_taken_0x5128b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5128B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128B0u;
        // 0x5128b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5128b0) {
            ctx->pc = 0x512850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_512850;
        }
    }
    ctx->pc = 0x5128B8u;
label_5128b8:
    // 0x5128b8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_5128bc:
    if (ctx->pc == 0x5128BCu) {
        ctx->pc = 0x5128BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128B8u;
        // 0x5128bc: 0x26a3c700  addiu       $v1, $s5, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5128C0u;
        goto label_5128c0;
    }
    ctx->pc = 0x5128B8u;
    {
        const bool branch_taken_0x5128b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x5128BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128B8u;
        // 0x5128bc: 0x26a3c700  addiu       $v1, $s5, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5128b8) {
            ctx->pc = 0x5128CCu;
            goto label_5128cc;
        }
    }
    ctx->pc = 0x5128C0u;
label_5128c0:
    // 0x5128c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5128c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5128c4:
    // 0x5128c4: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x5128c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_5128c8:
    // 0x5128c8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x5128c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_5128cc:
    // 0x5128cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5128ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5128d0:
    // 0x5128d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5128d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_5128d4:
    // 0x5128d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5128d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5128d8:
    // 0x5128d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5128d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_5128dc:
    // 0x5128dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5128dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5128e0:
    // 0x5128e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5128e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_5128e4:
    // 0x5128e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5128e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5128e8:
    // 0x5128e8: 0x3e00008  jr          $ra
label_5128ec:
    if (ctx->pc == 0x5128ECu) {
        ctx->pc = 0x5128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128E8u;
        // 0x5128ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5128F0u;
        goto label_5128f0;
    }
    ctx->pc = 0x5128E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5128E8u;
        // 0x5128ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5128E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5128F0u;
label_5128f0:
    // 0x5128f0: 0x3e00008  jr          $ra
label_5128f4:
    if (ctx->pc == 0x5128F4u) {
        ctx->pc = 0x5128F8u;
        goto label_fallthrough_0x5128f0;
    }
    ctx->pc = 0x5128F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5128F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x5128f0:
    ctx->pc = 0x5128F8u;
}
