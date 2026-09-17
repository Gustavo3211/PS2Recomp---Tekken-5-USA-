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

// Function: sub_0024C500
// Address: 0x24c500 - 0x24c980
void sub_0024C500_0x24c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C500_0x24c500");
#endif

    switch (ctx->pc) {
        case 0x24c56cu: goto label_24c56c;
        case 0x24c5a8u: goto label_24c5a8;
        case 0x24c5b8u: goto label_24c5b8;
        case 0x24c5c8u: goto label_24c5c8;
        case 0x24c5f0u: goto label_24c5f0;
        case 0x24c600u: goto label_24c600;
        case 0x24c610u: goto label_24c610;
        case 0x24c620u: goto label_24c620;
        case 0x24c640u: goto label_24c640;
        case 0x24c658u: goto label_24c658;
        case 0x24c7b0u: goto label_24c7b0;
        case 0x24c7c4u: goto label_24c7c4;
        case 0x24c850u: goto label_24c850;
        case 0x24c85cu: goto label_24c85c;
        case 0x24c874u: goto label_24c874;
        case 0x24c87cu: goto label_24c87c;
        case 0x24c890u: goto label_24c890;
        case 0x24c898u: goto label_24c898;
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c8ccu: goto label_24c8cc;
        case 0x24c8d8u: goto label_24c8d8;
        case 0x24c8e4u: goto label_24c8e4;
        case 0x24c928u: goto label_24c928;
        case 0x24c93cu: goto label_24c93c;
        default: break;
    }

    ctx->pc = 0x24c500u;

    // 0x24c500: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24c504: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24c508: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24c508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c50c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x24c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x24c510: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c514: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24c518: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c51c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x24c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x24c520: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24c520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c524: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24c528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c52c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24c530: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x24c530u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x24c534: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x24c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x24c538: 0x26c28858  addiu       $v0, $s6, -0x77A8
    ctx->pc = 0x24c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
    // 0x24c53c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x24c53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x24c540: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x24c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x24c544: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x24c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x24c548: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x24c548u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x24c54c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x24c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x24c550: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x24c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x24c554: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24c558: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24c558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c55c: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x24c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x24c560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c564: 0xc093064  jal         func_24C190
    ctx->pc = 0x24C564u;
    SET_GPR_U32(ctx, 31, 0x24C56Cu);
    ctx->pc = 0x24C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C564u;
    // 0x24c568: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C190u, 0x24C564u, 0x24C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C56Cu;
label_24c56c:
    // 0x24c56c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24c56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c570: 0xae740008  sw          $s4, 0x8($s3)
    ctx->pc = 0x24c570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 20));
    // 0x24c574: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x24c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x24c578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C578u;
    {
        const bool branch_taken_0x24c578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c578) {
            ctx->pc = 0x24C5A0u;
            goto label_24c5a0;
        }
    }
    ctx->pc = 0x24C580u;
    // 0x24c580: 0xde620028  ld          $v0, 0x28($s3)
    ctx->pc = 0x24c580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x24c584: 0x2821016  dsrlv       $v0, $v0, $s4
    ctx->pc = 0x24c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 20) & 0x3F));
    // 0x24c588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c58c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C58Cu;
    {
        const bool branch_taken_0x24c58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c58c) {
            ctx->pc = 0x24C5B0u;
            goto label_24c5b0;
        }
    }
    ctx->pc = 0x24C594u;
    // 0x24c594: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x24C594u;
    {
        const bool branch_taken_0x24c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C594u;
        // 0x24c598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c594) {
            ctx->pc = 0x24C94Cu;
            goto label_24c94c;
        }
    }
    ctx->pc = 0x24C59Cu;
    // 0x24c59c: 0x0  nop
    ctx->pc = 0x24c59cu;
    // NOP
label_24c5a0:
    // 0x24c5a0: 0xc0a3c26  jal         func_28F098
    ctx->pc = 0x24C5A0u;
    SET_GPR_U32(ctx, 31, 0x24C5A8u);
    ctx->pc = 0x28F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F098u, 0x24C5A0u, 0x24C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5A8u;
label_24c5a8:
    // 0x24c5a8: 0x504000e9  beql        $v0, $zero, . + 4 + (0xE9 << 2)
    ctx->pc = 0x24C5A8u;
    {
        const bool branch_taken_0x24c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5a8) {
            ctx->pc = 0x24C5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5A8u;
            // 0x24c5ac: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C950u;
            goto label_24c950;
        }
    }
    ctx->pc = 0x24C5B0u;
label_24c5b0:
    // 0x24c5b0: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x24C5B0u;
    SET_GPR_U32(ctx, 31, 0x24C5B8u);
    ctx->pc = 0x24C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5B0u;
    // 0x24c5b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x24C5B0u, 0x24C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5B8u;
label_24c5b8:
    // 0x24c5b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C5B8u;
    {
        const bool branch_taken_0x24c5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c5b8) {
            ctx->pc = 0x24C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5B8u;
            // 0x24c5bc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5DCu;
            goto label_24c5dc;
        }
    }
    ctx->pc = 0x24C5C0u;
    // 0x24c5c0: 0xc092eee  jal         func_24BBB8
    ctx->pc = 0x24C5C0u;
    SET_GPR_U32(ctx, 31, 0x24C5C8u);
    ctx->pc = 0x24C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5C0u;
    // 0x24c5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BBB8u, 0x24C5C0u, 0x24C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5C8u;
label_24c5c8:
    // 0x24c5c8: 0x504000e1  beql        $v0, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x24C5C8u;
    {
        const bool branch_taken_0x24c5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5c8) {
            ctx->pc = 0x24C5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5C8u;
            // 0x24c5cc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C950u;
            goto label_24c950;
        }
    }
    ctx->pc = 0x24C5D0u;
    // 0x24c5d0: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x24c5d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24c5d4: 0xae740008  sw          $s4, 0x8($s3)
    ctx->pc = 0x24c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 20));
    // 0x24c5d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24c5dc:
    // 0x24c5dc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x24c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24c5e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C5E0u;
    {
        const bool branch_taken_0x24c5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5E0u;
        // 0x24c5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5e0) {
            ctx->pc = 0x24C5F4u;
            goto label_24c5f4;
        }
    }
    ctx->pc = 0x24C5E8u;
    // 0x24c5e8: 0xc086396  jal         func_218E58
    ctx->pc = 0x24C5E8u;
    SET_GPR_U32(ctx, 31, 0x24C5F0u);
    ctx->pc = 0x24C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5E8u;
    // 0x24c5ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x24C5E8u, 0x24C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5F0u;
label_24c5f0:
    // 0x24c5f0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x24c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_24c5f4:
    // 0x24c5f4: 0x82640023  lb          $a0, 0x23($s3)
    ctx->pc = 0x24c5f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x24c5f8: 0xc0b2a3c  jal         func_2CA8F0
    ctx->pc = 0x24C5F8u;
    SET_GPR_U32(ctx, 31, 0x24C600u);
    ctx->pc = 0x24C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5F8u;
    // 0x24c5fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8F0u, 0x24C5F8u, 0x24C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C600u;
label_24c600:
    // 0x24c600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C600u;
    {
        const bool branch_taken_0x24c600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c600) {
            ctx->pc = 0x24C618u;
            goto label_24c618;
        }
    }
    ctx->pc = 0x24C608u;
    // 0x24c608: 0xc08638e  jal         func_218E38
    ctx->pc = 0x24C608u;
    SET_GPR_U32(ctx, 31, 0x24C610u);
    ctx->pc = 0x24C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C608u;
    // 0x24c60c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E38u, 0x24C608u, 0x24C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C610u;
label_24c610:
    // 0x24c610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24C610u;
    {
        const bool branch_taken_0x24c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C610u;
        // 0x24c614: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c610) {
            ctx->pc = 0x24C624u;
            goto label_24c624;
        }
    }
    ctx->pc = 0x24C618u;
label_24c618:
    // 0x24c618: 0xc086386  jal         func_218E18
    ctx->pc = 0x24C618u;
    SET_GPR_U32(ctx, 31, 0x24C620u);
    ctx->pc = 0x24C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C618u;
    // 0x24c61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E18u, 0x24C618u, 0x24C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C620u;
label_24c620:
    // 0x24c620: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24c620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c624:
    // 0x24c624: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24c628: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x24c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24c62c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C62Cu;
    {
        const bool branch_taken_0x24c62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C62Cu;
        // 0x24c630: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c62c) {
            ctx->pc = 0x24C638u;
            goto label_24c638;
        }
    }
    ctx->pc = 0x24C634u;
    // 0x24c634: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24c634u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_24c638:
    // 0x24c638: 0xc092eee  jal         func_24BBB8
    ctx->pc = 0x24C638u;
    SET_GPR_U32(ctx, 31, 0x24C640u);
    ctx->pc = 0x24C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C638u;
    // 0x24c63c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BBB8u, 0x24C638u, 0x24C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C640u;
label_24c640:
    // 0x24c640: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24C640u;
    {
        const bool branch_taken_0x24c640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C640u;
        // 0x24c644: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c640) {
            ctx->pc = 0x24C698u;
            goto label_24c698;
        }
    }
    ctx->pc = 0x24C648u;
    // 0x24c648: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C648u;
    {
        const bool branch_taken_0x24c648 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C648u;
        // 0x24c64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c648) {
            ctx->pc = 0x24C68Cu;
            goto label_24c68c;
        }
    }
    ctx->pc = 0x24C650u;
    // 0x24c650: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24C650u;
    SET_GPR_U32(ctx, 31, 0x24C658u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24C650u, 0x24C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C658u;
label_24c658:
    // 0x24c658: 0x26c58858  addiu       $a1, $s6, -0x77A8
    ctx->pc = 0x24c658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
    // 0x24c65c: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x24c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x24c660: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24c664: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24c664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24c668: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x24c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x24c66c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24c670: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x24c670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24c674: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x24c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x24c678: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x24c678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x24c67c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x24c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x24c680: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x24c680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24c684: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x24c684u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24c688: 0x22bc3  sra         $a1, $v0, 15
    ctx->pc = 0x24c688u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 15));
label_24c68c:
    // 0x24c68c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x24C68Cu;
    {
        const bool branch_taken_0x24c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C68Cu;
        // 0x24c690: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c68c) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C694u;
    // 0x24c694: 0x0  nop
    ctx->pc = 0x24c694u;
    // NOP
label_24c698:
    // 0x24c698: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x24c698u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x24c69c: 0x246718b8  addiu       $a3, $v1, 0x18B8
    ctx->pc = 0x24c69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6328));
    // 0x24c6a0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x24c6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24c6a4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x24c6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24c6a8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x24c6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24c6ac: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x24c6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24c6b0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x24c6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24c6b4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x24c6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24c6b8: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x24c6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c6bc: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x24c6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c6c0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x24c6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c6c4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x24c6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c6c8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x24c6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c6cc: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x24c6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c6d0: 0x80e40018  lb          $a0, 0x18($a3)
    ctx->pc = 0x24c6d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x24c6d4: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x24c6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x24c6d8: 0x5200009d  beql        $s0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x24C6D8u;
    {
        const bool branch_taken_0x24c6d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6d8) {
            ctx->pc = 0x24C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6D8u;
            // 0x24c6dc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C950u;
            goto label_24c950;
        }
    }
    ctx->pc = 0x24C6E0u;
    // 0x24c6e0: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x24c6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24c6e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24C6E4u;
    {
        const bool branch_taken_0x24c6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6E4u;
        // 0x24c6e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6e4) {
            ctx->pc = 0x24C714u;
            goto label_24c714;
        }
    }
    ctx->pc = 0x24C6ECu;
    // 0x24c6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c6f0: 0x56a20005  bnel        $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C6F0u;
    {
        const bool branch_taken_0x24c6f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c6f0) {
            ctx->pc = 0x24C6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6F0u;
            // 0x24c6f4: 0x27a5000f  addiu       $a1, $sp, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C708u;
            goto label_24c708;
        }
    }
    ctx->pc = 0x24C6F8u;
    // 0x24c6f8: 0x27a50005  addiu       $a1, $sp, 0x5
    ctx->pc = 0x24c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5));
    // 0x24c6fc: 0x27a3000a  addiu       $v1, $sp, 0xA
    ctx->pc = 0x24c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10));
    // 0x24c700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C700u;
    {
        const bool branch_taken_0x24c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C700u;
        // 0x24c704: 0x3a820007  xori        $v0, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c700) {
            ctx->pc = 0x24C710u;
            goto label_24c710;
        }
    }
    ctx->pc = 0x24C708u;
label_24c708:
    // 0x24c708: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x24c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x24c70c: 0x3aa20004  xori        $v0, $s5, 0x4
    ctx->pc = 0x24c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)4);
label_24c710:
    // 0x24c710: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x24c710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_24c714:
    // 0x24c714: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x24c714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x24c718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C718u;
    {
        const bool branch_taken_0x24c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C718u;
        // 0x24c71c: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c718) {
            ctx->pc = 0x24C728u;
            goto label_24c728;
        }
    }
    ctx->pc = 0x24C720u;
    // 0x24c720: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24C720u;
    {
        const bool branch_taken_0x24c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C720u;
        // 0x24c724: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c720) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C728u;
label_24c728:
    // 0x24c728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C728u;
    {
        const bool branch_taken_0x24c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C728u;
        // 0x24c72c: 0x32020040  andi        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c728) {
            ctx->pc = 0x24C738u;
            goto label_24c738;
        }
    }
    ctx->pc = 0x24C730u;
    // 0x24c730: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24C730u;
    {
        const bool branch_taken_0x24c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C730u;
        // 0x24c734: 0x90b10001  lbu         $s1, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c730) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C738u;
label_24c738:
    // 0x24c738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C738u;
    {
        const bool branch_taken_0x24c738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C738u;
        // 0x24c73c: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c738) {
            ctx->pc = 0x24C748u;
            goto label_24c748;
        }
    }
    ctx->pc = 0x24C740u;
    // 0x24c740: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24C740u;
    {
        const bool branch_taken_0x24c740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C740u;
        // 0x24c744: 0x90b10002  lbu         $s1, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c740) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C748u;
label_24c748:
    // 0x24c748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C748u;
    {
        const bool branch_taken_0x24c748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C748u;
        // 0x24c74c: 0x3202000f  andi        $v0, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c748) {
            ctx->pc = 0x24C758u;
            goto label_24c758;
        }
    }
    ctx->pc = 0x24C750u;
    // 0x24c750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24C750u;
    {
        const bool branch_taken_0x24c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C750u;
        // 0x24c754: 0x90b10003  lbu         $s1, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c750) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C758u;
label_24c758:
    // 0x24c758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C758u;
    {
        const bool branch_taken_0x24c758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C758u;
        // 0x24c75c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c758) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C760u;
    // 0x24c760: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x24c760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24c764: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x24C764u;
    {
        const bool branch_taken_0x24c764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C764u;
        // 0x24c768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c764) {
            ctx->pc = 0x24C94Cu;
            goto label_24c94c;
        }
    }
    ctx->pc = 0x24C76Cu;
    // 0x24c76c: 0x90b10004  lbu         $s1, 0x4($a1)
    ctx->pc = 0x24c76cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_24c770:
    // 0x24c770: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c778: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C778u;
    {
        const bool branch_taken_0x24c778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C778u;
        // 0x24c77c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c778) {
            ctx->pc = 0x24C794u;
            goto label_24c794;
        }
    }
    ctx->pc = 0x24C780u;
    // 0x24c780: 0x82630020  lb          $v1, 0x20($s3)
    ctx->pc = 0x24c780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x24c784: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24c788: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x24C788u;
    {
        const bool branch_taken_0x24c788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C788u;
        // 0x24c78c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c788) {
            ctx->pc = 0x24C848u;
            goto label_24c848;
        }
    }
    ctx->pc = 0x24C790u;
    // 0x24c790: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24c790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24c794:
    // 0x24c794: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x24c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x24c798: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24C798u;
    {
        const bool branch_taken_0x24c798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C798u;
        // 0x24c79c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c798) {
            ctx->pc = 0x24C844u;
            goto label_24c844;
        }
    }
    ctx->pc = 0x24C7A0u;
    // 0x24c7a0: 0x249e0008  addiu       $fp, $a0, 0x8
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x24c7a4: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c7a8: 0x2ab70004  slti        $s7, $s5, 0x4
    ctx->pc = 0x24c7a8u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24c7ac: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x24c7acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_24c7b0:
    // 0x24c7b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7b4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x24c7b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24c7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7bc: 0xc086396  jal         func_218E58
    ctx->pc = 0x24C7BCu;
    SET_GPR_U32(ctx, 31, 0x24C7C4u);
    ctx->pc = 0x24C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7BCu;
    // 0x24c7c0: 0x3d08021  addu        $s0, $fp, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x24C7BCu, 0x24C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7C4u;
label_24c7c4:
    // 0x24c7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c7c8: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24C7C8u;
    {
        const bool branch_taken_0x24c7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c7c8) {
            ctx->pc = 0x24C7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7C8u;
            // 0x24c7cc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C830u;
            goto label_24c830;
        }
    }
    ctx->pc = 0x24C7D0u;
    // 0x24c7d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c7d4: 0x16a50003  bne         $s5, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C7D4u;
    {
        const bool branch_taken_0x24c7d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        if (branch_taken_0x24c7d4) {
            ctx->pc = 0x24C7E4u;
            goto label_24c7e4;
        }
    }
    ctx->pc = 0x24C7DCu;
    // 0x24c7dc: 0x52360013  beql        $s1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x24C7DCu;
    {
        const bool branch_taken_0x24c7dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        if (branch_taken_0x24c7dc) {
            ctx->pc = 0x24C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7DCu;
            // 0x24c7e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C82Cu;
            goto label_24c82c;
        }
    }
    ctx->pc = 0x24C7E4u;
label_24c7e4:
    // 0x24c7e4: 0x56e00011  bnel        $s7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C7E4u;
    {
        const bool branch_taken_0x24c7e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c7e4) {
            ctx->pc = 0x24C7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7E4u;
            // 0x24c7e8: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C82Cu;
            goto label_24c82c;
        }
    }
    ctx->pc = 0x24C7ECu;
    // 0x24c7ec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x24c7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24c7f0: 0x5686000e  bnel        $s4, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x24C7F0u;
    {
        const bool branch_taken_0x24c7f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 6));
        if (branch_taken_0x24c7f0) {
            ctx->pc = 0x24C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7F0u;
            // 0x24c7f4: 0x3a310002  xori        $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C82Cu;
            goto label_24c82c;
        }
    }
    ctx->pc = 0x24C7F8u;
    // 0x24c7f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C7F8u;
    {
        const bool branch_taken_0x24c7f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7F8u;
        // 0x24c7fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7f8) {
            ctx->pc = 0x24C808u;
            goto label_24c808;
        }
    }
    ctx->pc = 0x24C800u;
    // 0x24c800: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24C800u;
    {
        const bool branch_taken_0x24c800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C800u;
        // 0x24c804: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c800) {
            ctx->pc = 0x24C82Cu;
            goto label_24c82c;
        }
    }
    ctx->pc = 0x24C808u;
label_24c808:
    // 0x24c808: 0x16270003  bne         $s1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C808u;
    {
        const bool branch_taken_0x24c808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x24c808) {
            ctx->pc = 0x24C818u;
            goto label_24c818;
        }
    }
    ctx->pc = 0x24C810u;
    // 0x24c810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C810u;
    {
        const bool branch_taken_0x24c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C810u;
        // 0x24c814: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c810) {
            ctx->pc = 0x24C82Cu;
            goto label_24c82c;
        }
    }
    ctx->pc = 0x24C818u;
label_24c818:
    // 0x24c818: 0x16360003  bne         $s1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C818u;
    {
        const bool branch_taken_0x24c818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x24C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C818u;
        // 0x24c81c: 0x3a220003  xori        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c818) {
            ctx->pc = 0x24C828u;
            goto label_24c828;
        }
    }
    ctx->pc = 0x24C820u;
    // 0x24c820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C820u;
    {
        const bool branch_taken_0x24c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C820u;
        // 0x24c824: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c820) {
            ctx->pc = 0x24C82Cu;
            goto label_24c82c;
        }
    }
    ctx->pc = 0x24C828u;
label_24c828:
    // 0x24c828: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x24c828u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24c82c:
    // 0x24c82c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24c830:
    // 0x24c830: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24c830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24c834: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x24c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x24c838: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x24c838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c83c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x24C83Cu;
    {
        const bool branch_taken_0x24c83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C83Cu;
        // 0x24c840: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c83c) {
            ctx->pc = 0x24C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c7b0;
        }
    }
    ctx->pc = 0x24C844u;
label_24c844:
    // 0x24c844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c848:
    // 0x24c848: 0xc086396  jal         func_218E58
    ctx->pc = 0x24C848u;
    SET_GPR_U32(ctx, 31, 0x24C850u);
    ctx->pc = 0x24C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C848u;
    // 0x24c84c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x24C848u, 0x24C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C850u;
label_24c850:
    // 0x24c850: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c854: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x24C854u;
    SET_GPR_U32(ctx, 31, 0x24C85Cu);
    ctx->pc = 0x24C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C854u;
    // 0x24c858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x24C854u, 0x24C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C85Cu;
label_24c85c:
    // 0x24c85c: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x24c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x24c860: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x24c860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x24c864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c868: 0x82640023  lb          $a0, 0x23($s3)
    ctx->pc = 0x24c868u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x24c86c: 0xc0b703e  jal         func_2DC0F8
    ctx->pc = 0x24C86Cu;
    SET_GPR_U32(ctx, 31, 0x24C874u);
    ctx->pc = 0x24C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C86Cu;
    // 0x24c870: 0xae72000c  sw          $s2, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC0F8u, 0x24C86Cu, 0x24C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C874u;
label_24c874:
    // 0x24c874: 0xc092940  jal         func_24A500
    ctx->pc = 0x24C874u;
    SET_GPR_U32(ctx, 31, 0x24C87Cu);
    ctx->pc = 0x24C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C874u;
    // 0x24c878: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24C874u, 0x24C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C87Cu;
label_24c87c:
    // 0x24c87c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x24c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x24c880: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C880u;
    {
        const bool branch_taken_0x24c880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C880u;
        // 0x24c884: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c880) {
            ctx->pc = 0x24C89Cu;
            goto label_24c89c;
        }
    }
    ctx->pc = 0x24C888u;
    // 0x24c888: 0xc086408  jal         func_219020
    ctx->pc = 0x24C888u;
    SET_GPR_U32(ctx, 31, 0x24C890u);
    ctx->pc = 0x24C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C888u;
    // 0x24c88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x24C888u, 0x24C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C890u;
label_24c890:
    // 0x24c890: 0xc091a7c  jal         func_2469F0
    ctx->pc = 0x24C890u;
    SET_GPR_U32(ctx, 31, 0x24C898u);
    ctx->pc = 0x24C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C890u;
    // 0x24c894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F0u, 0x24C890u, 0x24C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C898u;
label_24c898:
    // 0x24c898: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_24c89c:
    // 0x24c89c: 0x244483c0  addiu       $a0, $v0, -0x7C40
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x24c8a0: 0x9083000e  lbu         $v1, 0xE($a0)
    ctx->pc = 0x24c8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x24c8a4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x24C8A4u;
    {
        const bool branch_taken_0x24c8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8A4u;
        // 0x24c8a8: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8a4) {
            ctx->pc = 0x24C930u;
            goto label_24c930;
        }
    }
    ctx->pc = 0x24C8ACu;
    // 0x24c8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c8b0: 0x54a20020  bnel        $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24C8B0u;
    {
        const bool branch_taken_0x24c8b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c8b0) {
            ctx->pc = 0x24C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C8B0u;
            // 0x24c8b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C934u;
            goto label_24c934;
        }
    }
    ctx->pc = 0x24C8B8u;
    // 0x24c8b8: 0xc086644  jal         func_219910
    ctx->pc = 0x24C8B8u;
    SET_GPR_U32(ctx, 31, 0x24C8C0u);
    ctx->pc = 0x24C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8B8u;
    // 0x24c8bc: 0x9084002e  lbu         $a0, 0x2E($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x24C8B8u, 0x24C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8C0u;
label_24c8c0:
    // 0x24c8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8c4: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x24C8C4u;
    SET_GPR_U32(ctx, 31, 0x24C8CCu);
    ctx->pc = 0x24C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8C4u;
    // 0x24c8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x24C8C4u, 0x24C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8CCu;
label_24c8cc:
    // 0x24c8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8d0: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x24C8D0u;
    SET_GPR_U32(ctx, 31, 0x24C8D8u);
    ctx->pc = 0x24C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8D0u;
    // 0x24c8d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x24C8D0u, 0x24C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8D8u;
label_24c8d8:
    // 0x24c8d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24c8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8dc: 0xc086386  jal         func_218E18
    ctx->pc = 0x24C8DCu;
    SET_GPR_U32(ctx, 31, 0x24C8E4u);
    ctx->pc = 0x24C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8DCu;
    // 0x24c8e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E18u, 0x24C8DCu, 0x24C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8E4u;
label_24c8e4:
    // 0x24c8e4: 0x1612000d  bne         $s0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x24C8E4u;
    {
        const bool branch_taken_0x24c8e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x24C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8E4u;
        // 0x24c8e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8e4) {
            ctx->pc = 0x24C91Cu;
            goto label_24c91c;
        }
    }
    ctx->pc = 0x24C8ECu;
    // 0x24c8ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c8f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C8F0u;
    {
        const bool branch_taken_0x24c8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8F0u;
        // 0x24c8f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8f0) {
            ctx->pc = 0x24C904u;
            goto label_24c904;
        }
    }
    ctx->pc = 0x24C8F8u;
    // 0x24c8f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c8fc: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C8FCu;
    {
        const bool branch_taken_0x24c8fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8FCu;
        // 0x24c900: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8fc) {
            ctx->pc = 0x24C918u;
            goto label_24c918;
        }
    }
    ctx->pc = 0x24C904u;
label_24c904:
    // 0x24c904: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C904u;
    {
        const bool branch_taken_0x24c904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c904) {
            ctx->pc = 0x24C908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C904u;
            // 0x24c908: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C91Cu;
            goto label_24c91c;
        }
    }
    ctx->pc = 0x24C90Cu;
    // 0x24c90c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24c910: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C910u;
    {
        const bool branch_taken_0x24c910 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c910) {
            ctx->pc = 0x24C914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C910u;
            // 0x24c914: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C91Cu;
            goto label_24c91c;
        }
    }
    ctx->pc = 0x24C918u;
label_24c918:
    // 0x24c918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c91c:
    // 0x24c91c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c920: 0xc086396  jal         func_218E58
    ctx->pc = 0x24C920u;
    SET_GPR_U32(ctx, 31, 0x24C928u);
    ctx->pc = 0x24C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C920u;
    // 0x24c924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x24C920u, 0x24C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C928u;
label_24c928:
    // 0x24c928: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x24c928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c92c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x24c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_24c930:
    // 0x24c930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c934:
    // 0x24c934: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24C934u;
    SET_GPR_U32(ctx, 31, 0x24C93Cu);
    ctx->pc = 0x24C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C934u;
    // 0x24c938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24C934u, 0x24C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C93Cu;
label_24c93c:
    // 0x24c93c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x24c940: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x24c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x24c944: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x24c944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24c948: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x24c948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24c94c:
    // 0x24c94c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24c94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24c950:
    // 0x24c950: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x24c950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24c954: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24c954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c958: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x24c958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c95c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c95cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c960: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x24c960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24c964: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24c964u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c968: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x24c968u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24c96c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x24c96cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c970: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x24c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c974: 0x3e00008  jr          $ra
    ctx->pc = 0x24C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C974u;
        // 0x24c978: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C97Cu;
    // 0x24c97c: 0x0  nop
    ctx->pc = 0x24c97cu;
    // NOP
    ctx->pc = 0x24c980u;
}
