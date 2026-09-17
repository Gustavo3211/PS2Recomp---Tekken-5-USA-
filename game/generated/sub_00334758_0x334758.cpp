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

// Function: sub_00334758
// Address: 0x334758 - 0x334808
void sub_00334758_0x334758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334758_0x334758");
#endif

    switch (ctx->pc) {
        case 0x334758u: goto label_334758;
        case 0x33475cu: goto label_33475c;
        case 0x334760u: goto label_334760;
        case 0x334764u: goto label_334764;
        case 0x334768u: goto label_334768;
        case 0x33476cu: goto label_33476c;
        case 0x334770u: goto label_334770;
        case 0x334774u: goto label_334774;
        case 0x334778u: goto label_334778;
        case 0x33477cu: goto label_33477c;
        case 0x334780u: goto label_334780;
        case 0x334784u: goto label_334784;
        case 0x334788u: goto label_334788;
        case 0x33478cu: goto label_33478c;
        case 0x334790u: goto label_334790;
        case 0x334794u: goto label_334794;
        case 0x334798u: goto label_334798;
        case 0x33479cu: goto label_33479c;
        case 0x3347a0u: goto label_3347a0;
        case 0x3347a4u: goto label_3347a4;
        case 0x3347a8u: goto label_3347a8;
        case 0x3347acu: goto label_3347ac;
        case 0x3347b0u: goto label_3347b0;
        case 0x3347b4u: goto label_3347b4;
        case 0x3347b8u: goto label_3347b8;
        case 0x3347bcu: goto label_3347bc;
        case 0x3347c0u: goto label_3347c0;
        case 0x3347c4u: goto label_3347c4;
        case 0x3347c8u: goto label_3347c8;
        case 0x3347ccu: goto label_3347cc;
        case 0x3347d0u: goto label_3347d0;
        case 0x3347d4u: goto label_3347d4;
        case 0x3347d8u: goto label_3347d8;
        case 0x3347dcu: goto label_3347dc;
        case 0x3347e0u: goto label_3347e0;
        case 0x3347e4u: goto label_3347e4;
        case 0x3347e8u: goto label_3347e8;
        case 0x3347ecu: goto label_3347ec;
        case 0x3347f0u: goto label_3347f0;
        case 0x3347f4u: goto label_3347f4;
        case 0x3347f8u: goto label_3347f8;
        case 0x3347fcu: goto label_3347fc;
        case 0x334800u: goto label_334800;
        case 0x334804u: goto label_334804;
        default: break;
    }

    ctx->pc = 0x334758u;

label_334758:
    // 0x334758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33475c:
    // 0x33475c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_334760:
    // 0x334760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_334764:
    // 0x334764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_334768:
    // 0x334768: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x334768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
label_33476c:
    // 0x33476c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_334770:
    if (ctx->pc == 0x334770u) {
        ctx->pc = 0x334770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33476Cu;
        // 0x334770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334774u;
        goto label_334774;
    }
    ctx->pc = 0x33476Cu;
    {
        const bool branch_taken_0x33476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33476Cu;
        // 0x334770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33476c) {
            ctx->pc = 0x3347F8u;
            goto label_3347f8;
        }
    }
    ctx->pc = 0x334774u;
label_334774:
    // 0x334774: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x334774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
label_334778:
    // 0x334778: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x334778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33477c:
    // 0x33477c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_334780:
    // 0x334780: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x334780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_334784:
    // 0x334784: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x334784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_334788:
    // 0x334788: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x334788u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33478c:
    // 0x33478c: 0xac820404  sw          $v0, 0x404($a0)
    ctx->pc = 0x33478cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 2));
label_334790:
    // 0x334790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334794:
    // 0x334794: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x334794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
label_334798:
    // 0x334798: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_33479c:
    if (ctx->pc == 0x33479Cu) {
        ctx->pc = 0x33479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334798u;
        // 0x33479c: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3347A0u;
        goto label_3347a0;
    }
    ctx->pc = 0x334798u;
    {
        const bool branch_taken_0x334798 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334798u;
        // 0x33479c: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334798) {
            ctx->pc = 0x3347CCu;
            goto label_3347cc;
        }
    }
    ctx->pc = 0x3347A0u;
label_3347a0:
    // 0x3347a0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3347a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3347a4:
    // 0x3347a4: 0x0  nop
    ctx->pc = 0x3347a4u;
    // NOP
label_3347a8:
    // 0x3347a8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3347a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3347ac:
    // 0x3347ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3347b0:
    // 0x3347b0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3347b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3347b4:
    // 0x3347b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3347b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3347b8:
    // 0x3347b8: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
label_3347bc:
    // 0x3347bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3347bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3347c0:
    // 0x3347c0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_3347c4:
    if (ctx->pc == 0x3347C4u) {
        ctx->pc = 0x3347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347C0u;
        // 0x3347c4: 0x78a20000  lq          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3347C8u;
        goto label_3347c8;
    }
    ctx->pc = 0x3347C0u;
    {
        const bool branch_taken_0x3347c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3347c0) {
            ctx->pc = 0x3347C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3347C0u;
            // 0x3347c4: 0x78a20000  lq          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3347A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3347a8;
        }
    }
    ctx->pc = 0x3347C8u;
label_3347c8:
    // 0x3347c8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x3347c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3347cc:
    // 0x3347cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3347ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3347d0:
    // 0x3347d0: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
label_3347d4:
    // 0x3347d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3347d8:
    if (ctx->pc == 0x3347D8u) {
        ctx->pc = 0x3347DCu;
        goto label_3347dc;
    }
    ctx->pc = 0x3347D4u;
    {
        const bool branch_taken_0x3347d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3347d4) {
            ctx->pc = 0x3347E4u;
            goto label_3347e4;
        }
    }
    ctx->pc = 0x3347DCu;
label_3347dc:
    // 0x3347dc: 0xc0cd23a  jal         func_3348E8
label_3347e0:
    if (ctx->pc == 0x3347E0u) {
        ctx->pc = 0x3347E4u;
        goto label_3347e4;
    }
    ctx->pc = 0x3347DCu;
    SET_GPR_U32(ctx, 31, 0x3347E4u);
    ctx->pc = 0x3348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3348E8u, 0x3347DCu, 0x3347E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347E4u;
label_3347e4:
    // 0x3347e4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_3347e8:
    if (ctx->pc == 0x3347E8u) {
        ctx->pc = 0x3347E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347E4u;
        // 0x3347e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3347ECu;
        goto label_3347ec;
    }
    ctx->pc = 0x3347E4u;
    {
        const bool branch_taken_0x3347e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3347e4) {
            ctx->pc = 0x3347E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3347E4u;
            // 0x3347e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3347F8u;
            goto label_3347f8;
        }
    }
    ctx->pc = 0x3347ECu;
label_3347ec:
    // 0x3347ec: 0x200f809  jalr        $s0
label_3347f0:
    if (ctx->pc == 0x3347F0u) {
        ctx->pc = 0x3347F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347ECu;
        // 0x3347f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3347F4u;
        goto label_3347f4;
    }
    ctx->pc = 0x3347ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x3347F4u);
        ctx->pc = 0x3347F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347ECu;
        // 0x3347f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3347ECu, 0x3347F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3347F4u;
label_3347f4:
    // 0x3347f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3347f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3347f8:
    // 0x3347f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3347f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3347fc:
    // 0x3347fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3347fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_334800:
    // 0x334800: 0x3e00008  jr          $ra
label_334804:
    if (ctx->pc == 0x334804u) {
        ctx->pc = 0x334804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334800u;
        // 0x334804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334808u;
        goto label_fallthrough_0x334800;
    }
    ctx->pc = 0x334800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334800u;
        // 0x334804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x334800:
    ctx->pc = 0x334808u;
}
