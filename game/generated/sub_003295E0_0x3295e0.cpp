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

// Function: sub_003295E0
// Address: 0x3295e0 - 0x3296b0
void sub_003295E0_0x3295e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003295E0_0x3295e0");
#endif

    switch (ctx->pc) {
        case 0x329610u: goto label_329610;
        case 0x32962cu: goto label_32962c;
        case 0x32967cu: goto label_32967c;
        case 0x329698u: goto label_329698;
        default: break;
    }

    ctx->pc = 0x3295e0u;

    // 0x3295e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3295e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295e4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3295e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3295e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3295e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3295ec: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x3295ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x3295f0: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x3295f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3295f4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3295f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x3295f8: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x3295f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3295fc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3295fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x329600: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x329600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x329604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329608: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x329608u;
    SET_GPR_U32(ctx, 31, 0x329610u);
    ctx->pc = 0x32960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329608u;
    // 0x32960c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x329608u, 0x329610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329610u;
label_329610:
    // 0x329610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x329614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x329618: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x329618u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32961c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32961Cu;
    {
        const bool branch_taken_0x32961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32961Cu;
        // 0x329620: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32961c) {
            ctx->pc = 0x32962Cu;
            goto label_32962c;
        }
    }
    ctx->pc = 0x329624u;
    // 0x329624: 0xc0ca67c  jal         func_3299F0
    ctx->pc = 0x329624u;
    SET_GPR_U32(ctx, 31, 0x32962Cu);
    ctx->pc = 0x3299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3299F0u, 0x329624u, 0x32962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32962Cu;
label_32962c:
    // 0x32962c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32962cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329630: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x329630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x329634: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x329634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x329638: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x329638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32963c: 0x3e00008  jr          $ra
    ctx->pc = 0x32963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32963Cu;
        // 0x329640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329644u;
    // 0x329644: 0x0  nop
    ctx->pc = 0x329644u;
    // NOP
    // 0x329648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32964c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32964cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329650: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x329650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x329654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x329658: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x329658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x32965c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32965cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32966c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x32966cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329670: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x329670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x329674: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x329674u;
    SET_GPR_U32(ctx, 31, 0x32967Cu);
    ctx->pc = 0x329678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329674u;
    // 0x329678: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x329674u, 0x32967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32967Cu;
label_32967c:
    // 0x32967c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32967cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329684: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329688u;
    {
        const bool branch_taken_0x329688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329688u;
        // 0x32968c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329688) {
            ctx->pc = 0x329698u;
            goto label_329698;
        }
    }
    ctx->pc = 0x329690u;
    // 0x329690: 0xc0ca6e8  jal         func_329BA0
    ctx->pc = 0x329690u;
    SET_GPR_U32(ctx, 31, 0x329698u);
    ctx->pc = 0x329BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329BA0u, 0x329690u, 0x329698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329698u;
label_329698:
    // 0x329698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32969c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32969cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3296a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3296a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3296a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3296a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3296a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3296A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3296ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296A8u;
        // 0x3296ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3296A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3296B0u;
}
