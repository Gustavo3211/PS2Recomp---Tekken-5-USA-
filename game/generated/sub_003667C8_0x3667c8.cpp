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

// Function: sub_003667C8
// Address: 0x3667c8 - 0x366ff8
void sub_003667C8_0x3667c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003667C8_0x3667c8");
#endif

    switch (ctx->pc) {
        case 0x366800u: goto label_366800;
        case 0x36680cu: goto label_36680c;
        case 0x366834u: goto label_366834;
        case 0x366850u: goto label_366850;
        case 0x3668dcu: goto label_3668dc;
        case 0x366914u: goto label_366914;
        case 0x36691cu: goto label_36691c;
        case 0x366928u: goto label_366928;
        case 0x366930u: goto label_366930;
        case 0x366938u: goto label_366938;
        case 0x366940u: goto label_366940;
        case 0x366970u: goto label_366970;
        case 0x366a04u: goto label_366a04;
        case 0x366a40u: goto label_366a40;
        case 0x366a48u: goto label_366a48;
        case 0x366a54u: goto label_366a54;
        case 0x366a5cu: goto label_366a5c;
        case 0x366a64u: goto label_366a64;
        case 0x366a6cu: goto label_366a6c;
        case 0x366aa0u: goto label_366aa0;
        case 0x366af0u: goto label_366af0;
        case 0x366af8u: goto label_366af8;
        case 0x366b30u: goto label_366b30;
        case 0x366b80u: goto label_366b80;
        case 0x366bb4u: goto label_366bb4;
        case 0x366bd8u: goto label_366bd8;
        case 0x366c00u: goto label_366c00;
        case 0x366c54u: goto label_366c54;
        case 0x366c98u: goto label_366c98;
        case 0x366ce0u: goto label_366ce0;
        case 0x366cf0u: goto label_366cf0;
        case 0x366d30u: goto label_366d30;
        case 0x366d50u: goto label_366d50;
        case 0x366d98u: goto label_366d98;
        case 0x366da8u: goto label_366da8;
        case 0x366de8u: goto label_366de8;
        case 0x366e08u: goto label_366e08;
        case 0x366e50u: goto label_366e50;
        case 0x366e74u: goto label_366e74;
        case 0x366e7cu: goto label_366e7c;
        case 0x366ea0u: goto label_366ea0;
        case 0x366edcu: goto label_366edc;
        case 0x366ee4u: goto label_366ee4;
        case 0x366ef0u: goto label_366ef0;
        case 0x366f00u: goto label_366f00;
        case 0x366f50u: goto label_366f50;
        case 0x366fc4u: goto label_366fc4;
        default: break;
    }

    ctx->pc = 0x3667c8u;

    // 0x3667c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3667c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3667cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3667ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3667d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3667d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3667d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3667d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3667d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667dc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3667dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3667e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3667e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3667e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3667e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3667e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3667e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3667ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3667ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3667f0: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x3667f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x3667f4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3667F4u;
    {
        const bool branch_taken_0x3667f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3667F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667F4u;
        // 0x3667f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3667f4) {
            ctx->pc = 0x36682Cu;
            goto label_36682c;
        }
    }
    ctx->pc = 0x3667FCu;
    // 0x3667fc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3667fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_366800:
    // 0x366800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366804: 0xc0d98fe  jal         func_3663F8
    ctx->pc = 0x366804u;
    SET_GPR_U32(ctx, 31, 0x36680Cu);
    ctx->pc = 0x366808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366804u;
    // 0x366808: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3663F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3663F8u, 0x366804u, 0x36680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36680Cu;
label_36680c:
    // 0x36680c: 0xa2000887  sb          $zero, 0x887($s0)
    ctx->pc = 0x36680cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2183), (uint8_t)GPR_U32(ctx, 0));
    // 0x366810: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x366810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x366814: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366818: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x366818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36681c: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x36681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366820: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x366820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x366824: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x366824u;
    {
        const bool branch_taken_0x366824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366824u;
        // 0x366828: 0x26101500  addiu       $s0, $s0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366824) {
            ctx->pc = 0x366800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366800;
        }
    }
    ctx->pc = 0x36682Cu;
label_36682c:
    // 0x36682c: 0xc0d9c80  jal         func_367200
    ctx->pc = 0x36682Cu;
    SET_GPR_U32(ctx, 31, 0x366834u);
    ctx->pc = 0x366830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36682Cu;
    // 0x366830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367200u, 0x36682Cu, 0x366834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366834u;
label_366834:
    // 0x366834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36683c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36683cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366844: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x366844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366848: 0x3e00008  jr          $ra
    ctx->pc = 0x366848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366848u;
        // 0x36684c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366850u;
label_366850:
    // 0x366850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x366850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x366854: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x366854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36685c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36685cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366864: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x366864u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x366868: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x366868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x36686c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x366870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x366874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x366878: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x366878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36687c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36687cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x366880: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x366880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x366884: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x366884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366888: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x366888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x36688c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x36688cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366890: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x366890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x366894: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x366894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x366898: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36689c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36689cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668a0: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3668a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3668a4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3668a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668a8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x3668a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3668ac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3668ACu;
    {
        const bool branch_taken_0x3668ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3668B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668ACu;
        // 0x3668b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3668ac) {
            ctx->pc = 0x3668CCu;
            goto label_3668cc;
        }
    }
    ctx->pc = 0x3668B4u;
    // 0x3668b4: 0xc4a109d8  lwc1        $f1, 0x9D8($a1)
    ctx->pc = 0x3668b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3668b8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x3668b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x3668bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3668bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3668c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3668c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3668c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3668C4u;
    {
        const bool branch_taken_0x3668c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3668c4) {
            ctx->pc = 0x3668C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3668C4u;
            // 0x3668c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3668CCu;
            goto label_3668cc;
        }
    }
    ctx->pc = 0x3668CCu;
label_3668cc:
    // 0x3668cc: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x3668CCu;
    {
        const bool branch_taken_0x3668cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3668D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668CCu;
        // 0x3668d0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3668cc) {
            ctx->pc = 0x366944u;
            goto label_366944;
        }
    }
    ctx->pc = 0x3668D4u;
    // 0x3668d4: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x3668D4u;
    SET_GPR_U32(ctx, 31, 0x3668DCu);
    ctx->pc = 0x3668D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3668D4u;
    // 0x3668d8: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x3668D4u, 0x3668DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668DCu;
label_3668dc:
    // 0x3668dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3668dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3668e0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x3668e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3668e4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x3668e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3668e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3668e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3668ec: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x3668ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x3668f0: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3668f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3668f4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3668f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3668f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3668f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668fc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3668fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x366900: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x366900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x366904: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x366904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x366908: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x366908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x36690c: 0xc04a48c  jal         func_129230
    ctx->pc = 0x36690Cu;
    SET_GPR_U32(ctx, 31, 0x366914u);
    ctx->pc = 0x366910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36690Cu;
    // 0x366910: 0xac53000c  sw          $s3, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x36690Cu, 0x366914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366914u;
label_366914:
    // 0x366914: 0xc0d943e  jal         func_3650F8
    ctx->pc = 0x366914u;
    SET_GPR_U32(ctx, 31, 0x36691Cu);
    ctx->pc = 0x366918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366914u;
    // 0x366918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3650F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3650F8u, 0x366914u, 0x36691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36691Cu;
label_36691c:
    // 0x36691c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366920: 0xc0d9430  jal         func_3650C0
    ctx->pc = 0x366920u;
    SET_GPR_U32(ctx, 31, 0x366928u);
    ctx->pc = 0x366924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366920u;
    // 0x366924: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3650C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3650C0u, 0x366920u, 0x366928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366928u;
label_366928:
    // 0x366928: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366928u;
    SET_GPR_U32(ctx, 31, 0x366930u);
    ctx->pc = 0x36692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366928u;
    // 0x36692c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366928u, 0x366930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366930u;
label_366930:
    // 0x366930: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366930u;
    SET_GPR_U32(ctx, 31, 0x366938u);
    ctx->pc = 0x366934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366930u;
    // 0x366934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366930u, 0x366938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366938u;
label_366938:
    // 0x366938: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366938u;
    SET_GPR_U32(ctx, 31, 0x366940u);
    ctx->pc = 0x36693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366938u;
    // 0x36693c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366938u, 0x366940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366940u;
label_366940:
    // 0x366940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366944:
    // 0x366944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36694c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36694cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366950: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366954: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x366954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366958: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x366958u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36695c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x36695cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366960: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x366960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366964: 0x3e00008  jr          $ra
    ctx->pc = 0x366964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366964u;
        // 0x366968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36696Cu;
    // 0x36696c: 0x0  nop
    ctx->pc = 0x36696cu;
    // NOP
label_366970:
    // 0x366970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x366970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x366974: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x366974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36697c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36697cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x366980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x366984: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x366984u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x366988: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x366988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x36698c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x366990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x366994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366998: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x366998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36699c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3669a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3669a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3669a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3669a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3669a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3669ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3669acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669b0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3669b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3669b4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3669b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669b8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3669b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3669bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3669bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3669c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3669c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669c4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3669c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669c8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3669c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3669cc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3669ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669d0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x3669d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3669d4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3669D4u;
    {
        const bool branch_taken_0x3669d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3669D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669D4u;
        // 0x3669d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3669d4) {
            ctx->pc = 0x3669F4u;
            goto label_3669f4;
        }
    }
    ctx->pc = 0x3669DCu;
    // 0x3669dc: 0xc4a109d8  lwc1        $f1, 0x9D8($a1)
    ctx->pc = 0x3669dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669e0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x3669e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x3669e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3669e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3669e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3669e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3669ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3669ECu;
    {
        const bool branch_taken_0x3669ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3669ec) {
            ctx->pc = 0x3669F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3669ECu;
            // 0x3669f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3669F4u;
            goto label_3669f4;
        }
    }
    ctx->pc = 0x3669F4u;
label_3669f4:
    // 0x3669f4: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3669F4u;
    {
        const bool branch_taken_0x3669f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3669F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669F4u;
        // 0x3669f8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3669f4) {
            ctx->pc = 0x366A70u;
            goto label_366a70;
        }
    }
    ctx->pc = 0x3669FCu;
    // 0x3669fc: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x3669FCu;
    SET_GPR_U32(ctx, 31, 0x366A04u);
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x3669FCu, 0x366A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A04u;
label_366a04:
    // 0x366a04: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x366a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x366a08: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x366a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x366a0c: 0x2918021  addu        $s0, $s4, $s1
    ctx->pc = 0x366a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x366a10: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x366a10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x366a14: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x366a14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a18: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x366a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x366a1c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x366a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x366a20: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x366a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x366a24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x366a24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x366a28: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x366a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x366a2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x366a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a30: 0xac530010  sw          $s3, 0x10($v0)
    ctx->pc = 0x366a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 19));
    // 0x366a34: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x366a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x366a38: 0xc04a48c  jal         func_129230
    ctx->pc = 0x366A38u;
    SET_GPR_U32(ctx, 31, 0x366A40u);
    ctx->pc = 0x366A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A38u;
    // 0x366a3c: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x366A38u, 0x366A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A40u;
label_366a40:
    // 0x366a40: 0xc0d943e  jal         func_3650F8
    ctx->pc = 0x366A40u;
    SET_GPR_U32(ctx, 31, 0x366A48u);
    ctx->pc = 0x366A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A40u;
    // 0x366a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3650F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3650F8u, 0x366A40u, 0x366A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A48u;
label_366a48:
    // 0x366a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a4c: 0xc0d9430  jal         func_3650C0
    ctx->pc = 0x366A4Cu;
    SET_GPR_U32(ctx, 31, 0x366A54u);
    ctx->pc = 0x366A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A4Cu;
    // 0x366a50: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3650C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3650C0u, 0x366A4Cu, 0x366A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A54u;
label_366a54:
    // 0x366a54: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366A54u;
    SET_GPR_U32(ctx, 31, 0x366A5Cu);
    ctx->pc = 0x366A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A54u;
    // 0x366a58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366A54u, 0x366A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A5Cu;
label_366a5c:
    // 0x366a5c: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366A5Cu;
    SET_GPR_U32(ctx, 31, 0x366A64u);
    ctx->pc = 0x366A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A5Cu;
    // 0x366a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366A5Cu, 0x366A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A64u;
label_366a64:
    // 0x366a64: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366A64u;
    SET_GPR_U32(ctx, 31, 0x366A6Cu);
    ctx->pc = 0x366A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A64u;
    // 0x366a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366A64u, 0x366A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A6Cu;
label_366a6c:
    // 0x366a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366a70:
    // 0x366a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366a78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366a7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x366a80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366a84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x366a84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x366a88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x366a88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366a8c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x366a8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366a90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x366a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366a94: 0x3e00008  jr          $ra
    ctx->pc = 0x366A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A94u;
        // 0x366a98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366A9Cu;
    // 0x366a9c: 0x0  nop
    ctx->pc = 0x366a9cu;
    // NOP
label_366aa0:
    // 0x366aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366aa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x366aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366aac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x366aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366ab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x366ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366abc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x366ac0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x366ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x366ac4: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x366AC4u;
    {
        const bool branch_taken_0x366ac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x366AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366AC4u;
        // 0x366ac8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ac4) {
            ctx->pc = 0x366B28u;
            goto label_366b28;
        }
    }
    ctx->pc = 0x366ACCu;
    // 0x366acc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366ad0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x366ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x366ad4: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x366ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366ad8: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x366AD8u;
    {
        const bool branch_taken_0x366ad8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x366ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366AD8u;
        // 0x366adc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ad8) {
            ctx->pc = 0x366B5Cu;
            goto label_366b5c;
        }
    }
    ctx->pc = 0x366AE0u;
    // 0x366ae0: 0x24140042  addiu       $s4, $zero, 0x42
    ctx->pc = 0x366ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x366ae4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x366ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366ae8: 0x26300887  addiu       $s0, $s1, 0x887
    ctx->pc = 0x366ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2183));
    // 0x366aec: 0x0  nop
    ctx->pc = 0x366aecu;
    // NOP
label_366af0:
    // 0x366af0: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366AF0u;
    SET_GPR_U32(ctx, 31, 0x366AF8u);
    ctx->pc = 0x366AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AF0u;
    // 0x366af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366AF0u, 0x366AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AF8u;
label_366af8:
    // 0x366af8: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x366af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x366afc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x366afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x366b00: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x366b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x366b04: 0xa2130000  sb          $s3, 0x0($s0)
    ctx->pc = 0x366b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x366b08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366b0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x366b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x366b10: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x366b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366b14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x366b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x366b18: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366B18u;
    {
        const bool branch_taken_0x366b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B18u;
        // 0x366b1c: 0x26101500  addiu       $s0, $s0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b18) {
            ctx->pc = 0x366AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366af0;
        }
    }
    ctx->pc = 0x366B20u;
    // 0x366b20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x366B20u;
    {
        const bool branch_taken_0x366b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B20u;
        // 0x366b24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b20) {
            ctx->pc = 0x366B60u;
            goto label_366b60;
        }
    }
    ctx->pc = 0x366B28u;
label_366b28:
    // 0x366b28: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366B28u;
    SET_GPR_U32(ctx, 31, 0x366B30u);
    ctx->pc = 0x366B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B28u;
    // 0x366b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366B28u, 0x366B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B30u;
label_366b30:
    // 0x366b30: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x366b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x366b34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x366b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x366b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x366b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x366b40: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x366b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366b44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x366b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x366b48: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x366b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x366b4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x366b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x366b50: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x366b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x366b54: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x366b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x366b58: 0xa0650887  sb          $a1, 0x887($v1)
    ctx->pc = 0x366b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2183), (uint8_t)GPR_U32(ctx, 5));
label_366b5c:
    // 0x366b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366b60:
    // 0x366b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x366b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366b74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x366b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x366b78: 0x3e00008  jr          $ra
    ctx->pc = 0x366B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B78u;
        // 0x366b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366B80u;
label_366b80:
    // 0x366b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366b88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x366b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x366b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x366b90: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x366b90u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x366b94: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x366b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x366b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366ba0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x366ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ba4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x366ba8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x366ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x366bac: 0xc0d9c62  jal         func_367188
    ctx->pc = 0x366BACu;
    SET_GPR_U32(ctx, 31, 0x366BB4u);
    ctx->pc = 0x366BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366BACu;
    // 0x366bb0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367188u, 0x366BACu, 0x366BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BB4u;
label_366bb4:
    // 0x366bb4: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x366bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x366bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x366bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x366bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x366bc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bc4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x366bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x366bc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bcc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x366bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x366bd0: 0xc0d9430  jal         func_3650C0
    ctx->pc = 0x366BD0u;
    SET_GPR_U32(ctx, 31, 0x366BD8u);
    ctx->pc = 0x366BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366BD0u;
    // 0x366bd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3650C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3650C0u, 0x366BD0u, 0x366BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BD8u;
label_366bd8:
    // 0x366bd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x366bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366bdc: 0x16230012  bne         $s1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x366BDCu;
    {
        const bool branch_taken_0x366bdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x366BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BDCu;
        // 0x366be0: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366bdc) {
            ctx->pc = 0x366C28u;
            goto label_366c28;
        }
    }
    ctx->pc = 0x366BE4u;
    // 0x366be4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366be8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x366be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x366bec: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x366becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366bf0: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x366BF0u;
    {
        const bool branch_taken_0x366bf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x366BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BF0u;
        // 0x366bf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366bf0) {
            ctx->pc = 0x366C44u;
            goto label_366c44;
        }
    }
    ctx->pc = 0x366BF8u;
    // 0x366bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x366bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x366bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366c00:
    // 0x366c00: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x366c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x366c04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x366c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x366c08: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x366c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x366c0c: 0x0  nop
    ctx->pc = 0x366c0cu;
    // NOP
    // 0x366c10: 0x0  nop
    ctx->pc = 0x366c10u;
    // NOP
    // 0x366c14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366C14u;
    {
        const bool branch_taken_0x366c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C14u;
        // 0x366c18: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c14) {
            ctx->pc = 0x366C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366c00;
        }
    }
    ctx->pc = 0x366C1Cu;
    // 0x366c1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x366C1Cu;
    {
        const bool branch_taken_0x366c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c1c) {
            ctx->pc = 0x366C44u;
            goto label_366c44;
        }
    }
    ctx->pc = 0x366C24u;
    // 0x366c24: 0x0  nop
    ctx->pc = 0x366c24u;
    // NOP
label_366c28:
    // 0x366c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366c2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x366c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x366c30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x366c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x366c34: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x366c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x366c38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x366c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x366c3c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x366c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x366c40: 0x2238004  sllv        $s0, $v1, $s1
    ctx->pc = 0x366c40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_366c44:
    // 0x366c44: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x366C44u;
    {
        const bool branch_taken_0x366c44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x366c44) {
            ctx->pc = 0x366C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366C44u;
            // 0x366c48: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366C68u;
            goto label_366c68;
        }
    }
    ctx->pc = 0x366C4Cu;
    // 0x366c4c: 0xc0d9c4a  jal         func_367128
    ctx->pc = 0x366C4Cu;
    SET_GPR_U32(ctx, 31, 0x366C54u);
    ctx->pc = 0x366C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C4Cu;
    // 0x366c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367128u, 0x366C4Cu, 0x366C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C54u;
label_366c54:
    // 0x366c54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c58: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x366c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x366c5c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x366c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x366c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x366C60u;
    {
        const bool branch_taken_0x366c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C60u;
        // 0x366c64: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c60) {
            ctx->pc = 0x366C70u;
            goto label_366c70;
        }
    }
    ctx->pc = 0x366C68u;
label_366c68:
    // 0x366c68: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x366c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x366c6c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x366c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_366c70:
    // 0x366c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366c7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366c80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x366c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366c88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x366c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x366c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x366C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C8Cu;
        // 0x366c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366C94u;
    // 0x366c94: 0x0  nop
    ctx->pc = 0x366c94u;
    // NOP
label_366c98:
    // 0x366c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366c9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x366c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366ca4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ca8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x366ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x366cac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x366cacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x366cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366cb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366cb8: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x366CB8u;
    {
        const bool branch_taken_0x366cb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x366CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366CB8u;
        // 0x366cbc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366cb8) {
            ctx->pc = 0x366D10u;
            goto label_366d10;
        }
    }
    ctx->pc = 0x366CC0u;
    // 0x366cc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366cc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x366cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x366cc8: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x366cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366ccc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x366CCCu;
    {
        const bool branch_taken_0x366ccc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x366CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366CCCu;
        // 0x366cd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ccc) {
            ctx->pc = 0x366D30u;
            goto label_366d30;
        }
    }
    ctx->pc = 0x366CD4u;
    // 0x366cd4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x366cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366cdc: 0x0  nop
    ctx->pc = 0x366cdcu;
    // NOP
label_366ce0:
    // 0x366ce0: 0x26101500  addiu       $s0, $s0, 0x1500
    ctx->pc = 0x366ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x366ce4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x366ce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x366ce8: 0xc0d9414  jal         func_365050
    ctx->pc = 0x366CE8u;
    SET_GPR_U32(ctx, 31, 0x366CF0u);
    ctx->pc = 0x366CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CE8u;
    // 0x366cec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365050u, 0x366CE8u, 0x366CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CF0u;
label_366cf0:
    // 0x366cf0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x366cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x366cf4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x366cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x366cf8: 0x8c63a800  lw          $v1, -0x5800($v1)
    ctx->pc = 0x366cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944768)));
    // 0x366cfc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x366cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x366d00: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x366D00u;
    {
        const bool branch_taken_0x366d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366d00) {
            ctx->pc = 0x366D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366D00u;
            // 0x366d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ce0;
        }
    }
    ctx->pc = 0x366D08u;
    // 0x366d08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x366D08u;
    {
        const bool branch_taken_0x366d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D08u;
        // 0x366d0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d08) {
            ctx->pc = 0x366D34u;
            goto label_366d34;
        }
    }
    ctx->pc = 0x366D10u;
label_366d10:
    // 0x366d10: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x366d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x366d14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x366d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x366d18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x366d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x366d1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x366d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x366d20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x366d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x366d24: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x366d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x366d28: 0xc0d9414  jal         func_365050
    ctx->pc = 0x366D28u;
    SET_GPR_U32(ctx, 31, 0x366D30u);
    ctx->pc = 0x366D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D28u;
    // 0x366d2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365050u, 0x366D28u, 0x366D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D30u;
label_366d30:
    // 0x366d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366d34:
    // 0x366d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366d40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366d44: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x366d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366d48: 0x3e00008  jr          $ra
    ctx->pc = 0x366D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D48u;
        // 0x366d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366D50u;
label_366d50:
    // 0x366d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366d54: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x366d54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x366d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366d5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366d60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x366d64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x366d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366d6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366d74: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x366D74u;
    {
        const bool branch_taken_0x366d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x366D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D74u;
        // 0x366d78: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d74) {
            ctx->pc = 0x366DC8u;
            goto label_366dc8;
        }
    }
    ctx->pc = 0x366D7Cu;
    // 0x366d7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366d80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x366d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x366d84: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x366d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366d88: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x366D88u;
    {
        const bool branch_taken_0x366d88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x366D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D88u;
        // 0x366d8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d88) {
            ctx->pc = 0x366DE8u;
            goto label_366de8;
        }
    }
    ctx->pc = 0x366D90u;
    // 0x366d90: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x366d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366d98:
    // 0x366d98: 0x26101500  addiu       $s0, $s0, 0x1500
    ctx->pc = 0x366d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x366d9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x366d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366da0: 0xc0d945e  jal         func_365178
    ctx->pc = 0x366DA0u;
    SET_GPR_U32(ctx, 31, 0x366DA8u);
    ctx->pc = 0x366DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DA0u;
    // 0x366da4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365178u, 0x366DA0u, 0x366DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DA8u;
label_366da8:
    // 0x366da8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x366da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x366dac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x366dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x366db0: 0x8c63a800  lw          $v1, -0x5800($v1)
    ctx->pc = 0x366db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944768)));
    // 0x366db4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x366db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x366db8: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x366DB8u;
    {
        const bool branch_taken_0x366db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366db8) {
            ctx->pc = 0x366DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366DB8u;
            // 0x366dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366d98;
        }
    }
    ctx->pc = 0x366DC0u;
    // 0x366dc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x366DC0u;
    {
        const bool branch_taken_0x366dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366DC0u;
        // 0x366dc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366dc0) {
            ctx->pc = 0x366DECu;
            goto label_366dec;
        }
    }
    ctx->pc = 0x366DC8u;
label_366dc8:
    // 0x366dc8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x366dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x366dcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x366dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366dd0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x366dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x366dd4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x366dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x366dd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x366dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x366ddc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x366ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x366de0: 0xc0d945e  jal         func_365178
    ctx->pc = 0x366DE0u;
    SET_GPR_U32(ctx, 31, 0x366DE8u);
    ctx->pc = 0x366DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DE0u;
    // 0x366de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365178u, 0x366DE0u, 0x366DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DE8u;
label_366de8:
    // 0x366de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366dec:
    // 0x366dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366df4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366df8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x366dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366e00: 0x3e00008  jr          $ra
    ctx->pc = 0x366E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E00u;
        // 0x366e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366E08u;
label_366e08:
    // 0x366e08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x366e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x366e0c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x366e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x366e10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e14: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x366e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x366e18: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x366e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e1c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x366e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x366e20: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x366e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x366e24: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x366e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x366e28: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x366e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x366e2c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366e30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x366e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x366e34: 0x8c42a800  lw          $v0, -0x5800($v0)
    ctx->pc = 0x366e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944768)));
    // 0x366e38: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x366E38u;
    {
        const bool branch_taken_0x366e38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x366E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E38u;
        // 0x366e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e38) {
            ctx->pc = 0x366E6Cu;
            goto label_366e6c;
        }
    }
    ctx->pc = 0x366E40u;
    // 0x366e40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x366e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366e48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e4c: 0x0  nop
    ctx->pc = 0x366e4cu;
    // NOP
label_366e50:
    // 0x366e50: 0x80a20008  lb          $v0, 0x8($a1)
    ctx->pc = 0x366e50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x366e54: 0x24a51500  addiu       $a1, $a1, 0x1500
    ctx->pc = 0x366e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
    // 0x366e58: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x366e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x366e5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x366e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x366e60: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x366e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x366e64: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366E64u;
    {
        const bool branch_taken_0x366e64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x366E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E64u;
        // 0x366e68: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e64) {
            ctx->pc = 0x366E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366e50;
        }
    }
    ctx->pc = 0x366E6Cu;
label_366e6c:
    // 0x366e6c: 0xc0d6b2c  jal         func_35ACB0
    ctx->pc = 0x366E6Cu;
    SET_GPR_U32(ctx, 31, 0x366E74u);
    ctx->pc = 0x366E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E6Cu;
    // 0x366e70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ACB0u, 0x366E6Cu, 0x366E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E74u;
label_366e74:
    // 0x366e74: 0xc0d6b6e  jal         func_35ADB8
    ctx->pc = 0x366E74u;
    SET_GPR_U32(ctx, 31, 0x366E7Cu);
    ctx->pc = 0x366E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E74u;
    // 0x366e78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ADB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ADB8u, 0x366E74u, 0x366E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E7Cu;
label_366e7c:
    // 0x366e7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x366e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x366e80: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x366e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x366e84: 0x8c63a800  lw          $v1, -0x5800($v1)
    ctx->pc = 0x366e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944768)));
    // 0x366e88: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x366E88u;
    {
        const bool branch_taken_0x366e88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x366E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E88u;
        // 0x366e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e88) {
            ctx->pc = 0x366ED0u;
            goto label_366ed0;
        }
    }
    ctx->pc = 0x366E90u;
    // 0x366e90: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x366e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e94: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x366e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366e98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e9c: 0x0  nop
    ctx->pc = 0x366e9cu;
    // NOP
label_366ea0:
    // 0x366ea0: 0x80a20008  lb          $v0, 0x8($a1)
    ctx->pc = 0x366ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x366ea4: 0x14480008  bne         $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x366EA4u;
    {
        const bool branch_taken_0x366ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x366EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EA4u;
        // 0x366ea8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ea4) {
            ctx->pc = 0x366EC8u;
            goto label_366ec8;
        }
    }
    ctx->pc = 0x366EACu;
    // 0x366eac: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x366eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x366eb0: 0x84a3002c  lh          $v1, 0x2C($a1)
    ctx->pc = 0x366eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x366eb4: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x366eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x366eb8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x366eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x366ebc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x366ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x366ec0: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x366ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x366ec4: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x366ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_366ec8:
    // 0x366ec8: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x366EC8u;
    {
        const bool branch_taken_0x366ec8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x366ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EC8u;
        // 0x366ecc: 0x24a51500  addiu       $a1, $a1, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ec8) {
            ctx->pc = 0x366EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ea0;
        }
    }
    ctx->pc = 0x366ED0u;
label_366ed0:
    // 0x366ed0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x366ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ed4: 0xc0d7704  jal         func_35DC10
    ctx->pc = 0x366ED4u;
    SET_GPR_U32(ctx, 31, 0x366EDCu);
    ctx->pc = 0x366ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366ED4u;
    // 0x366ed8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DC10u, 0x366ED4u, 0x366EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EDCu;
label_366edc:
    // 0x366edc: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x366EDCu;
    SET_GPR_U32(ctx, 31, 0x366EE4u);
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x366EDCu, 0x366EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EE4u;
label_366ee4:
    // 0x366ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ee8: 0xc0d7826  jal         func_35E098
    ctx->pc = 0x366EE8u;
    SET_GPR_U32(ctx, 31, 0x366EF0u);
    ctx->pc = 0x366EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EE8u;
    // 0x366eec: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E098u, 0x366EE8u, 0x366EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EF0u;
label_366ef0:
    // 0x366ef0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x366EF0u;
    {
        const bool branch_taken_0x366ef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x366EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EF0u;
        // 0x366ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ef0) {
            ctx->pc = 0x366F18u;
            goto label_366f18;
        }
    }
    ctx->pc = 0x366EF8u;
    // 0x366ef8: 0xc045d28  jal         func_1174A0
    ctx->pc = 0x366EF8u;
    SET_GPR_U32(ctx, 31, 0x366F00u);
    ctx->pc = 0x366EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EF8u;
    // 0x366efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1174A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1174A0u, 0x366EF8u, 0x366F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F00u;
label_366f00:
    // 0x366f00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x366f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x366f08: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x366f08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x366f0c: 0xac27a804  sw          $a3, -0x57FC($at)
    ctx->pc = 0x366f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944772), GPR_U32(ctx, 7));
    // 0x366f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x366F10u;
    {
        const bool branch_taken_0x366f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f10) {
            ctx->pc = 0x366F2Cu;
            goto label_366f2c;
        }
    }
    ctx->pc = 0x366F18u;
label_366f18:
    // 0x366f18: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x366f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x366f1c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x366f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x366f20: 0x8c63a804  lw          $v1, -0x57FC($v1)
    ctx->pc = 0x366f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944772)));
    // 0x366f24: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x366f24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x366f28: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x366f28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_366f2c:
    // 0x366f2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x366f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x366f30: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x366f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x366f34: 0x8c63a800  lw          $v1, -0x5800($v1)
    ctx->pc = 0x366f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944768)));
    // 0x366f38: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x366F38u;
    {
        const bool branch_taken_0x366f38 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x366F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F38u;
        // 0x366f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f38) {
            ctx->pc = 0x366FBCu;
            goto label_366fbc;
        }
    }
    ctx->pc = 0x366F40u;
    // 0x366f40: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x366f40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366f44: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x366f44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f4c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x366f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_366f50:
    // 0x366f50: 0x80820008  lb          $v0, 0x8($a0)
    ctx->pc = 0x366f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x366f54: 0x544a0016  bnel        $v0, $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x366F54u;
    {
        const bool branch_taken_0x366f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x366f54) {
            ctx->pc = 0x366F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366F54u;
            // 0x366f58: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366FB0u;
            goto label_366fb0;
        }
    }
    ctx->pc = 0x366F5Cu;
    // 0x366f5c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x366f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x366f60: 0xac900034  sw          $s0, 0x34($a0)
    ctx->pc = 0x366f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 16));
    // 0x366f64: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x366f64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x366f68: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x366f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x366f6c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x366f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x366f70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x366f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x366f74: 0x14690004  bne         $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x366F74u;
    {
        const bool branch_taken_0x366f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x366F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F74u;
        // 0x366f78: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f74) {
            ctx->pc = 0x366F88u;
            goto label_366f88;
        }
    }
    ctx->pc = 0x366F7Cu;
    // 0x366f7c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x366f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x366f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x366F80u;
    {
        const bool branch_taken_0x366f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F80u;
        // 0x366f84: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f80) {
            ctx->pc = 0x366F8Cu;
            goto label_366f8c;
        }
    }
    ctx->pc = 0x366F88u;
label_366f88:
    // 0x366f88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x366f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_366f8c:
    // 0x366f8c: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x366f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x366f90: 0xa4850038  sh          $a1, 0x38($a0)
    ctx->pc = 0x366f90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x366f94: 0xa483003a  sh          $v1, 0x3A($a0)
    ctx->pc = 0x366f94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x366f98: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x366f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x366f9c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x366f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x366fa0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x366fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x366fa4: 0x8c63a800  lw          $v1, -0x5800($v1)
    ctx->pc = 0x366fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944768)));
    // 0x366fa8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x366fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x366fac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x366facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_366fb0:
    // 0x366fb0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x366fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x366fb4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x366FB4u;
    {
        const bool branch_taken_0x366fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366FB4u;
        // 0x366fb8: 0x24841500  addiu       $a0, $a0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366fb4) {
            ctx->pc = 0x366F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366f50;
        }
    }
    ctx->pc = 0x366FBCu;
label_366fbc:
    // 0x366fbc: 0xc0d6a96  jal         func_35AA58
    ctx->pc = 0x366FBCu;
    SET_GPR_U32(ctx, 31, 0x366FC4u);
    ctx->pc = 0x35AA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA58u, 0x366FBCu, 0x366FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FC4u;
label_366fc4:
    // 0x366fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366fc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x366fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x366fcc: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x366fccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x366fd0: 0xac22a80c  sw          $v0, -0x57F4($at)
    ctx->pc = 0x366fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944780), GPR_U32(ctx, 2));
    // 0x366fd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fd8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x366fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366fdc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x366fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366fe0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x366fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366fe4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x366fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x366fe8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x366fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x366fec: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x366fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x366ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x366FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366FF0u;
        // 0x366ff4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366FF8u;
}
