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

// Function: sub_00294450
// Address: 0x294450 - 0x294588
void sub_00294450_0x294450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294450_0x294450");
#endif

    switch (ctx->pc) {
        case 0x29449cu: goto label_29449c;
        case 0x2944c0u: goto label_2944c0;
        case 0x294524u: goto label_294524;
        case 0x294538u: goto label_294538;
        case 0x294540u: goto label_294540;
        default: break;
    }

    ctx->pc = 0x294450u;

    // 0x294450: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x294454: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x294454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x294458: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29445c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x29445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x294460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294464: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x294464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294468: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x294468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29446c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x29446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x294470: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294474: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x294474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x294478: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x294478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29447c: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x29447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x294480: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x294480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x294484: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x294484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x294488: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x294488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x29448c: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x29448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x294490: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x294490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x294494: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x294494u;
    SET_GPR_U32(ctx, 31, 0x29449Cu);
    ctx->pc = 0x294498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294494u;
    // 0x294498: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA80u, 0x294494u, 0x29449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29449Cu;
label_29449c:
    // 0x29449c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x29449cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2944a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2944a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2944a4: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2944A4u;
    {
        const bool branch_taken_0x2944a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2944A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944A4u;
        // 0x2944a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944a4) {
            ctx->pc = 0x294558u;
            goto label_294558;
        }
    }
    ctx->pc = 0x2944ACu;
    // 0x2944ac: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2944acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2944b0: 0x27b60014  addiu       $s6, $sp, 0x14
    ctx->pc = 0x2944b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2944b4: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2944b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2944b8: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x2944b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2944bc: 0x2617000c  addiu       $s7, $s0, 0xC
    ctx->pc = 0x2944bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2944c0:
    // 0x2944c0: 0x1190c0  sll         $s2, $s1, 3
    ctx->pc = 0x2944c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2944c4: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x2944c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x2944c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2944c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2944ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2944d0: 0x16830007  bne         $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2944D0u;
    {
        const bool branch_taken_0x2944d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2944D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944D0u;
        // 0x2944d4: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944d0) {
            ctx->pc = 0x2944F0u;
            goto label_2944f0;
        }
    }
    ctx->pc = 0x2944D8u;
    // 0x2944d8: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x2944d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2944dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2944dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2944e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2944e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2944e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2944E4u;
    {
        const bool branch_taken_0x2944e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2944E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944E4u;
        // 0x2944e8: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944e4) {
            ctx->pc = 0x294500u;
            goto label_294500;
        }
    }
    ctx->pc = 0x2944ECu;
    // 0x2944ec: 0x0  nop
    ctx->pc = 0x2944ecu;
    // NOP
label_2944f0:
    // 0x2944f0: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2944f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2944f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2944f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2944f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2944fc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2944fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_294500:
    // 0x294500: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x294500u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x294504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x294508: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x294508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29450c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x29450cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x294510: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x294510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294514: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x294514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x294518: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x294518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29451c: 0xc08761c  jal         func_21D870
    ctx->pc = 0x29451Cu;
    SET_GPR_U32(ctx, 31, 0x294524u);
    ctx->pc = 0x294520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29451Cu;
    // 0x294520: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D870u, 0x29451Cu, 0x294524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294524u;
label_294524:
    // 0x294524: 0x3d22821  addu        $a1, $fp, $s2
    ctx->pc = 0x294524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x294528: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x294528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x29452c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x294530: 0xc086428  jal         func_2190A0
    ctx->pc = 0x294530u;
    SET_GPR_U32(ctx, 31, 0x294538u);
    ctx->pc = 0x294534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294530u;
    // 0x294534: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x294530u, 0x294538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294538u;
label_294538:
    // 0x294538: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x294538u;
    SET_GPR_U32(ctx, 31, 0x294540u);
    ctx->pc = 0x29453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294538u;
    // 0x29453c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x294538u, 0x294540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294540u;
label_294540:
    // 0x294540: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x294540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x294544: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x294544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x294548: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x294548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29454c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x29454cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x294550: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x294550u;
    {
        const bool branch_taken_0x294550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294550u;
        // 0x294554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294550) {
            ctx->pc = 0x2944C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2944c0;
        }
    }
    ctx->pc = 0x294558u;
label_294558:
    // 0x294558: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x294558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29455c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x29455cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x294560: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x294560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x294564: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x294564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x294568: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x294568u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29456c: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x29456cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x294570: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x294570u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x294574: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x294574u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x294578: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x294578u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29457c: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x29457cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x294580: 0x3e00008  jr          $ra
    ctx->pc = 0x294580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294580u;
        // 0x294584: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294588u;
}
