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

// Function: sub_00299510
// Address: 0x299510 - 0x299698
void sub_00299510_0x299510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299510_0x299510");
#endif

    switch (ctx->pc) {
        case 0x299524u: goto label_299524;
        case 0x299538u: goto label_299538;
        case 0x29954cu: goto label_29954c;
        case 0x299568u: goto label_299568;
        case 0x299584u: goto label_299584;
        case 0x2995a0u: goto label_2995a0;
        case 0x2995d8u: goto label_2995d8;
        case 0x299600u: goto label_299600;
        case 0x299680u: goto label_299680;
        default: break;
    }

    ctx->pc = 0x299510u;

    // 0x299510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x299518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29951c: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x29951Cu;
    SET_GPR_U32(ctx, 31, 0x299524u);
    ctx->pc = 0x299520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29951Cu;
    // 0x299520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x29951Cu, 0x299524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299524u;
label_299524:
    // 0x299524: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x299524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x299528: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x299528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x29952c: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x29952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
    // 0x299530: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x299530u;
    SET_GPR_U32(ctx, 31, 0x299538u);
    ctx->pc = 0x299534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299530u;
    // 0x299534: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x299530u, 0x299538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299538u;
label_299538:
    // 0x299538: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x299538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29953c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x299540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299544: 0xc089636  jal         func_2258D8
    ctx->pc = 0x299544u;
    SET_GPR_U32(ctx, 31, 0x29954Cu);
    ctx->pc = 0x299548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299544u;
    // 0x299548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x299544u, 0x29954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29954Cu;
label_29954c:
    // 0x29954c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x299550: 0xaf90cad0  sw          $s0, -0x3530($gp)
    ctx->pc = 0x299550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953680), GPR_U32(ctx, 16));
    // 0x299554: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x299554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x299558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29955c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x29955cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x299560: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x299560u;
    SET_GPR_U32(ctx, 31, 0x299568u);
    ctx->pc = 0x299564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299560u;
    // 0x299564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x299560u, 0x299568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299568u;
label_299568:
    // 0x299568: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x299568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29956c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299570: 0x2463e4b0  addiu       $v1, $v1, -0x1B50
    ctx->pc = 0x299570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960304));
    // 0x299574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299578: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x299578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29957c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29957Cu;
    SET_GPR_U32(ctx, 31, 0x299584u);
    ctx->pc = 0x299580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29957Cu;
    // 0x299580: 0xaf82cac4  sw          $v0, -0x353C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29957Cu, 0x299584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299584u;
label_299584:
    // 0x299584: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x299584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x299588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29958c: 0x2463e480  addiu       $v1, $v1, -0x1B80
    ctx->pc = 0x29958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960256));
    // 0x299590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299594: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x299594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x299598: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x299598u;
    SET_GPR_U32(ctx, 31, 0x2995A0u);
    ctx->pc = 0x29959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299598u;
    // 0x29959c: 0xaf82cac8  sw          $v0, -0x3538($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x299598u, 0x2995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995A0u;
label_2995a0:
    // 0x2995a0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2995a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2995a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2995a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995a8: 0x2463e450  addiu       $v1, $v1, -0x1BB0
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960208));
    // 0x2995ac: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2995acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2995b0: 0xaf82cacc  sw          $v0, -0x3534($gp)
    ctx->pc = 0x2995b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953676), GPR_U32(ctx, 2));
    // 0x2995b4: 0x8f82cac4  lw          $v0, -0x353C($gp)
    ctx->pc = 0x2995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953668)));
    // 0x2995b8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2995bc: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2995bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x2995c0: 0x8f83cac8  lw          $v1, -0x3538($gp)
    ctx->pc = 0x2995c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953672)));
    // 0x2995c4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2995c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2995c8: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x2995c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
    // 0x2995cc: 0x8f82cacc  lw          $v0, -0x3534($gp)
    ctx->pc = 0x2995ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953676)));
    // 0x2995d0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2995d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2995d4: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x2995d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_2995d8:
    // 0x2995d8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2995dc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2995e0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2995e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2995e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2995e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2995e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2995ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2995ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2995f0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2995f4: 0x2466000c  addiu       $a2, $v1, 0xC
    ctx->pc = 0x2995f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2995f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2995fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2995fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_299600:
    // 0x299600: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x299600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x299604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x299608: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x299608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29960c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x29960cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x299610: 0x0  nop
    ctx->pc = 0x299610u;
    // NOP
    // 0x299614: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299614u;
    {
        const bool branch_taken_0x299614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x299618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299614u;
        // 0x299618: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299614) {
            ctx->pc = 0x299600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299600;
        }
    }
    ctx->pc = 0x29961Cu;
    // 0x29961c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29961cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299620: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x299620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x299624: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x299624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x299628: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x299628u;
    {
        const bool branch_taken_0x299628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299628u;
        // 0x29962c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299628) {
            ctx->pc = 0x2995D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2995d8;
        }
    }
    ctx->pc = 0x299630u;
    // 0x299630: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x299630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x299634: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x299634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x299638: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x299638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29963c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x299640: 0xac440100  sw          $a0, 0x100($v0)
    ctx->pc = 0x299640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 4));
    // 0x299644: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x299648: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x299648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x29964c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x299650: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x299650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x299654: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x299654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x299658: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x299658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x29965c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29965Cu;
    {
        const bool branch_taken_0x29965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29965Cu;
        // 0x299660: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29965c) {
            ctx->pc = 0x2996A0u;
            return;
        }
    }
    ctx->pc = 0x299664u;
    // 0x299664: 0x0  nop
    ctx->pc = 0x299664u;
    // NOP
    // 0x299668: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x299668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29966c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x29966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x299670: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x299670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x299674: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x299674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299678: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x299678u;
    SET_GPR_U32(ctx, 31, 0x299680u);
    ctx->pc = 0x29967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299678u;
    // 0x29967c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x299678u, 0x299680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299680u;
label_299680:
    // 0x299680: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x299680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x299684: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x299684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x299688: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x299688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x29968c: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x29968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
    // 0x299690: 0xc048b90  jal         func_122E40
    ctx->pc = 0x299690u;
    SET_GPR_U32(ctx, 31, 0x299698u);
    ctx->pc = 0x299694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299690u;
    // 0x299694: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x299690u, 0x299698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299698u;
}
