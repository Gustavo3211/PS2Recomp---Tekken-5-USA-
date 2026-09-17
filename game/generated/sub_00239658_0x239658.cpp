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

// Function: sub_00239658
// Address: 0x239658 - 0x2399d0
void sub_00239658_0x239658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239658_0x239658");
#endif

    switch (ctx->pc) {
        case 0x239684u: goto label_239684;
        case 0x239688u: goto label_239688;
        case 0x239694u: goto label_239694;
        case 0x2396fcu: goto label_2396fc;
        case 0x239718u: goto label_239718;
        case 0x239730u: goto label_239730;
        case 0x23974cu: goto label_23974c;
        case 0x2397acu: goto label_2397ac;
        case 0x2397ecu: goto label_2397ec;
        case 0x239824u: goto label_239824;
        case 0x239888u: goto label_239888;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398f4u: goto label_2398f4;
        case 0x239944u: goto label_239944;
        case 0x239984u: goto label_239984;
        default: break;
    }

    ctx->pc = 0x239658u;

    // 0x239658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23965c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x239660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239664: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x239664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x239668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23966c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239670: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239674: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x239674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x239678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23967c: 0xc08e89c  jal         func_23A270
    ctx->pc = 0x23967Cu;
    SET_GPR_U32(ctx, 31, 0x239684u);
    ctx->pc = 0x239680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23967Cu;
    // 0x239680: 0x3c150016  lui         $s5, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)22 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A270u, 0x23967Cu, 0x239684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239684u;
label_239684:
    // 0x239684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239688:
    // 0x239688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23968c: 0xc043088  jal         func_10C220
    ctx->pc = 0x23968Cu;
    SET_GPR_U32(ctx, 31, 0x239694u);
    ctx->pc = 0x239690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23968Cu;
    // 0x239690: 0x138840  sll         $s1, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C220u, 0x23968Cu, 0x239694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239694u;
label_239694:
    // 0x239694: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x239694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x239698: 0x26a4d600  addiu       $a0, $s5, -0x2A00
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x23969c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23969cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2396a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2396a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396a4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2396a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2396a8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2396A8u;
    {
        const bool branch_taken_0x2396a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2396ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396A8u;
        // 0x2396ac: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396a8) {
            ctx->pc = 0x2396C0u;
            goto label_2396c0;
        }
    }
    ctx->pc = 0x2396B0u;
    // 0x2396b0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2396b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2396b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2396B4u;
    {
        const bool branch_taken_0x2396b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396B4u;
        // 0x2396b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396b4) {
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x2396BCu;
    // 0x2396bc: 0x0  nop
    ctx->pc = 0x2396bcu;
    // NOP
label_2396c0:
    // 0x2396c0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2396c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2396c4:
    // 0x2396c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2396c8: 0x2c620031  sltiu       $v0, $v1, 0x31
    ctx->pc = 0x2396c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x2396cc: 0x504000b4  beql        $v0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2396CCu;
    {
        const bool branch_taken_0x2396cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396cc) {
            ctx->pc = 0x2396D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396CCu;
            // 0x2396d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x2396D4u;
    // 0x2396d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2396d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2396d8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2396d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2396dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2396e0: 0x8c63a990  lw          $v1, -0x5670($v1)
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945168)));
    // 0x2396e4: 0x600008  jr          $v1
    ctx->pc = 0x2396E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239798u: goto label_239798;
            case 0x2397D8u: goto label_2397d8;
            case 0x239818u: goto label_239818;
            case 0x239868u: goto label_239868;
            case 0x239890u: goto label_239890;
            case 0x2398E8u: goto label_2398e8;
            case 0x239950u: goto label_239950;
            case 0x23999Cu: goto label_23999c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2396E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2396ECu;
    // 0x2396ec: 0x0  nop
    ctx->pc = 0x2396ecu;
    // NOP
label_2396f0:
    // 0x2396f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2396f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396f4: 0xc08e580  jal         func_239600
    ctx->pc = 0x2396F4u;
    SET_GPR_U32(ctx, 31, 0x2396FCu);
    ctx->pc = 0x2396F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396F4u;
    // 0x2396f8: 0x26b2d600  addiu       $s2, $s5, -0x2A00 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239600u, 0x2396F4u, 0x2396FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396FCu;
label_2396fc:
    // 0x2396fc: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2396fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x239700: 0x288c0  sll         $s1, $v0, 3
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239708: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x239708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x23970c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239710: 0xc08e71a  jal         func_239C68
    ctx->pc = 0x239710u;
    SET_GPR_U32(ctx, 31, 0x239718u);
    ctx->pc = 0x239714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239710u;
    // 0x239714: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C68u, 0x239710u, 0x239718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239718u;
label_239718:
    // 0x239718: 0x120000a0  beqz        $s0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x239718u;
    {
        const bool branch_taken_0x239718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239718u;
        // 0x23971c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239718) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239720u;
    // 0x239720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239724: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239728: 0xc043192  jal         func_10C648
    ctx->pc = 0x239728u;
    SET_GPR_U32(ctx, 31, 0x239730u);
    ctx->pc = 0x23972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239728u;
    // 0x23972c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x239728u, 0x239730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239730u;
label_239730:
    // 0x239730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239734: 0x12000099  beqz        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x239734u;
    {
        const bool branch_taken_0x239734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239734u;
        // 0x239738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239734) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x23973Cu;
    // 0x23973c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23973cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239740: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x239740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239744: 0xc043192  jal         func_10C648
    ctx->pc = 0x239744u;
    SET_GPR_U32(ctx, 31, 0x23974Cu);
    ctx->pc = 0x239748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239744u;
    // 0x239748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x239744u, 0x23974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23974Cu;
label_23974c:
    // 0x23974c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239750: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x239750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x239754: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x239754u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x239758: 0x12040007  beq         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239758u;
    {
        const bool branch_taken_0x239758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x23975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239758u;
        // 0x23975c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239758) {
            ctx->pc = 0x239778u;
            goto label_239778;
        }
    }
    ctx->pc = 0x239760u;
    // 0x239760: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239760u;
    {
        const bool branch_taken_0x239760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x239764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239760u;
        // 0x239764: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239760) {
            ctx->pc = 0x239788u;
            goto label_239788;
        }
    }
    ctx->pc = 0x239768u;
    // 0x239768: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x239768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23976c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x23976Cu;
    {
        const bool branch_taken_0x23976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23976Cu;
        // 0x239770: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23976c) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239774u;
    // 0x239774: 0x0  nop
    ctx->pc = 0x239774u;
    // NOP
label_239778:
    // 0x239778: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x239778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x23977c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239780: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x239780u;
    {
        const bool branch_taken_0x239780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239780u;
        // 0x239784: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239780) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239788u;
label_239788:
    // 0x239788: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x239788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23978c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x23978Cu;
    {
        const bool branch_taken_0x23978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23978Cu;
        // 0x239790: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23978c) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239794u;
    // 0x239794: 0x0  nop
    ctx->pc = 0x239794u;
    // NOP
label_239798:
    // 0x239798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23979c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2397a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2397a4: 0xc043192  jal         func_10C648
    ctx->pc = 0x2397A4u;
    SET_GPR_U32(ctx, 31, 0x2397ACu);
    ctx->pc = 0x2397A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397A4u;
    // 0x2397a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x2397A4u, 0x2397ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ACu;
label_2397ac:
    // 0x2397ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2397ACu;
    {
        const bool branch_taken_0x2397ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2397B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397ACu;
        // 0x2397b0: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397ac) {
            ctx->pc = 0x2397C8u;
            goto label_2397c8;
        }
    }
    ctx->pc = 0x2397B4u;
    // 0x2397b4: 0x26a4d600  addiu       $a0, $s5, -0x2A00
    ctx->pc = 0x2397b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x2397b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2397bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2397BCu;
    {
        const bool branch_taken_0x2397bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397BCu;
        // 0x2397c0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397bc) {
            ctx->pc = 0x239808u;
            goto label_239808;
        }
    }
    ctx->pc = 0x2397C4u;
    // 0x2397c4: 0x0  nop
    ctx->pc = 0x2397c4u;
    // NOP
label_2397c8:
    // 0x2397c8: 0x26a3d600  addiu       $v1, $s5, -0x2A00
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x2397cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2397ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2397d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2397D0u;
    {
        const bool branch_taken_0x2397d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397D0u;
        // 0x2397d4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397d0) {
            ctx->pc = 0x239878u;
            goto label_239878;
        }
    }
    ctx->pc = 0x2397D8u;
label_2397d8:
    // 0x2397d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2397d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2397dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2397e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397e4: 0xc0431e0  jal         func_10C780
    ctx->pc = 0x2397E4u;
    SET_GPR_U32(ctx, 31, 0x2397ECu);
    ctx->pc = 0x2397E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397E4u;
    // 0x2397e8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C780u, 0x2397E4u, 0x2397ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2397ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397f0: 0x5443006b  bnel        $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2397F0u;
    {
        const bool branch_taken_0x2397f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2397f0) {
            ctx->pc = 0x2397F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2397F0u;
            // 0x2397f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x2397F8u;
    // 0x2397f8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2397f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2397fc: 0x26a4d600  addiu       $a0, $s5, -0x2A00
    ctx->pc = 0x2397fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x239800: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239804: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x239804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_239808:
    // 0x239808: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23980c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x23980Cu;
    {
        const bool branch_taken_0x23980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23980Cu;
        // 0x239810: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23980c) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239814u;
    // 0x239814: 0x0  nop
    ctx->pc = 0x239814u;
    // NOP
label_239818:
    // 0x239818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23981c: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x23981Cu;
    SET_GPR_U32(ctx, 31, 0x239824u);
    ctx->pc = 0x239820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23981Cu;
    // 0x239820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x23981Cu, 0x239824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239824u;
label_239824:
    // 0x239824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23982c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23982Cu;
    {
        const bool branch_taken_0x23982c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x239830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23982Cu;
        // 0x239830: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23982c) {
            ctx->pc = 0x239848u;
            goto label_239848;
        }
    }
    ctx->pc = 0x239834u;
    // 0x239834: 0x26a3d600  addiu       $v1, $s5, -0x2A00
    ctx->pc = 0x239834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x239838: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23983c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x23983Cu;
    {
        const bool branch_taken_0x23983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23983Cu;
        // 0x239840: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23983c) {
            ctx->pc = 0x239998u;
            goto label_239998;
        }
    }
    ctx->pc = 0x239844u;
    // 0x239844: 0x0  nop
    ctx->pc = 0x239844u;
    // NOP
label_239848:
    // 0x239848: 0x56000055  bnel        $s0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x239848u;
    {
        const bool branch_taken_0x239848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x239848) {
            ctx->pc = 0x23984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239848u;
            // 0x23984c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x239850u;
    // 0x239850: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x239854: 0x26a3d600  addiu       $v1, $s5, -0x2A00
    ctx->pc = 0x239854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x239858: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23985c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x23985Cu;
    {
        const bool branch_taken_0x23985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23985Cu;
        // 0x239860: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23985c) {
            ctx->pc = 0x239998u;
            goto label_239998;
        }
    }
    ctx->pc = 0x239864u;
    // 0x239864: 0x0  nop
    ctx->pc = 0x239864u;
    // NOP
label_239868:
    // 0x239868: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x23986c: 0x26a3d600  addiu       $v1, $s5, -0x2A00
    ctx->pc = 0x23986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x239870: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239874: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x239874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_239878:
    // 0x239878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23987c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239880: 0xc08e580  jal         func_239600
    ctx->pc = 0x239880u;
    SET_GPR_U32(ctx, 31, 0x239888u);
    ctx->pc = 0x239884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239880u;
    // 0x239884: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239600u, 0x239880u, 0x239888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239888u;
label_239888:
    // 0x239888: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x239888u;
    {
        const bool branch_taken_0x239888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239888u;
        // 0x23988c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239888) {
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x239890u;
label_239890:
    // 0x239890: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x239890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239894: 0x56020042  bnel        $s0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x239894u;
    {
        const bool branch_taken_0x239894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x239894) {
            ctx->pc = 0x239898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239894u;
            // 0x239898: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x23989Cu;
    // 0x23989c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2398a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2398a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2398a8: 0xc043106  jal         func_10C418
    ctx->pc = 0x2398A8u;
    SET_GPR_U32(ctx, 31, 0x2398B0u);
    ctx->pc = 0x2398ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398A8u;
    // 0x2398ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C418u, 0x2398A8u, 0x2398B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398B0u;
label_2398b0:
    // 0x2398b0: 0x26a7d600  addiu       $a3, $s5, -0x2A00
    ctx->pc = 0x2398b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x2398b4: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x2398b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2398b8: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x2398b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2398bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2398c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2398c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398c4: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x2398c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2398c8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2398c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2398cc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x2398ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x2398d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2398d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398d4: 0x2786a840  addiu       $a2, $gp, -0x57C0
    ctx->pc = 0x2398d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944832));
    // 0x2398d8: 0xc043240  jal         func_10C900
    ctx->pc = 0x2398D8u;
    SET_GPR_U32(ctx, 31, 0x2398E0u);
    ctx->pc = 0x2398DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398D8u;
    // 0x2398dc: 0xad090000  sw          $t1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C900u, 0x2398D8u, 0x2398E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398E0u;
label_2398e0:
    // 0x2398e0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2398E0u;
    {
        const bool branch_taken_0x2398e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398E0u;
        // 0x2398e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398e0) {
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x2398E8u;
label_2398e8:
    // 0x2398e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2398e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398ec: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x2398ECu;
    SET_GPR_U32(ctx, 31, 0x2398F4u);
    ctx->pc = 0x2398F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398ECu;
    // 0x2398f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x2398ECu, 0x2398F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398F4u;
label_2398f4:
    // 0x2398f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2398f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2398f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2398fc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2398FCu;
    {
        const bool branch_taken_0x2398fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x239900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398FCu;
        // 0x239900: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398fc) {
            ctx->pc = 0x239918u;
            goto label_239918;
        }
    }
    ctx->pc = 0x239904u;
    // 0x239904: 0x26a3d600  addiu       $v1, $s5, -0x2A00
    ctx->pc = 0x239904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x239908: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23990c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23990Cu;
    {
        const bool branch_taken_0x23990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23990Cu;
        // 0x239910: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23990c) {
            ctx->pc = 0x239998u;
            goto label_239998;
        }
    }
    ctx->pc = 0x239914u;
    // 0x239914: 0x0  nop
    ctx->pc = 0x239914u;
    // NOP
label_239918:
    // 0x239918: 0x56000021  bnel        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x239918u;
    {
        const bool branch_taken_0x239918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x239918) {
            ctx->pc = 0x23991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239918u;
            // 0x23991c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x239920u;
    // 0x239920: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x239920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x239924: 0x26a3d600  addiu       $v1, $s5, -0x2A00
    ctx->pc = 0x239924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x239928: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23992c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x23992cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x239930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239938: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x239938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x23993c: 0xc08e71a  jal         func_239C68
    ctx->pc = 0x23993Cu;
    SET_GPR_U32(ctx, 31, 0x239944u);
    ctx->pc = 0x239940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23993Cu;
    // 0x239940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C68u, 0x23993Cu, 0x239944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239944u;
label_239944:
    // 0x239944: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x239944u;
    {
        const bool branch_taken_0x239944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239944u;
        // 0x239948: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239944) {
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x23994Cu;
    // 0x23994c: 0x0  nop
    ctx->pc = 0x23994cu;
    // NOP
label_239950:
    // 0x239950: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x239950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239954: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239954u;
    {
        const bool branch_taken_0x239954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x239958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239954u;
        // 0x239958: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239954) {
            ctx->pc = 0x239964u;
            goto label_239964;
        }
    }
    ctx->pc = 0x23995Cu;
    // 0x23995c: 0x56020010  bnel        $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23995Cu;
    {
        const bool branch_taken_0x23995c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23995c) {
            ctx->pc = 0x239960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23995Cu;
            // 0x239960: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x239964u;
label_239964:
    // 0x239964: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x239964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x239968: 0x26b4d600  addiu       $s4, $s5, -0x2A00
    ctx->pc = 0x239968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956544));
    // 0x23996c: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x23996cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239970: 0x26820004  addiu       $v0, $s4, 0x4
    ctx->pc = 0x239970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x239974: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x239978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23997c: 0xc08e540  jal         func_239500
    ctx->pc = 0x23997Cu;
    SET_GPR_U32(ctx, 31, 0x239984u);
    ctx->pc = 0x239980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23997Cu;
    // 0x239980: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239500u, 0x23997Cu, 0x239984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239984u;
label_239984:
    // 0x239984: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x239984u;
    {
        const bool branch_taken_0x239984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239984) {
            ctx->pc = 0x239988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239984u;
            // 0x239988: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399A0u;
            goto label_2399a0;
        }
    }
    ctx->pc = 0x23998Cu;
    // 0x23998c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239990: 0x10500002  beq         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239990u;
    {
        const bool branch_taken_0x239990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x239994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239990u;
        // 0x239994: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239990) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239998u;
label_239998:
    // 0x239998: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x239998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_23999c:
    // 0x23999c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23999cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2399a0:
    // 0x2399a0: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2399a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2399a4: 0x1440ff38  bnez        $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x2399A4u;
    {
        const bool branch_taken_0x2399a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2399A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399A4u;
        // 0x2399a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399a4) {
            ctx->pc = 0x239688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239688;
        }
    }
    ctx->pc = 0x2399ACu;
    // 0x2399ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2399acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2399b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2399b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2399b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2399b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2399b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2399b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2399bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2399bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2399c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2399c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2399c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2399c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2399C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2399CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399C8u;
        // 0x2399cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2399C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2399D0u;
}
