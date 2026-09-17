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

// Function: sub_003676D0
// Address: 0x3676d0 - 0x367d00
void sub_003676D0_0x3676d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003676D0_0x3676d0");
#endif

    switch (ctx->pc) {
        case 0x3676f4u: goto label_3676f4;
        case 0x367704u: goto label_367704;
        case 0x367714u: goto label_367714;
        case 0x367740u: goto label_367740;
        case 0x367754u: goto label_367754;
        case 0x36775cu: goto label_36775c;
        case 0x367780u: goto label_367780;
        case 0x367794u: goto label_367794;
        case 0x36779cu: goto label_36779c;
        case 0x3677e8u: goto label_3677e8;
        case 0x3677f4u: goto label_3677f4;
        case 0x367800u: goto label_367800;
        case 0x367818u: goto label_367818;
        case 0x367820u: goto label_367820;
        case 0x367834u: goto label_367834;
        case 0x367850u: goto label_367850;
        case 0x367868u: goto label_367868;
        case 0x3678e0u: goto label_3678e0;
        case 0x367924u: goto label_367924;
        case 0x367998u: goto label_367998;
        case 0x3679e0u: goto label_3679e0;
        case 0x367a4cu: goto label_367a4c;
        case 0x367a9cu: goto label_367a9c;
        case 0x367ae8u: goto label_367ae8;
        case 0x367b30u: goto label_367b30;
        case 0x367bb8u: goto label_367bb8;
        case 0x367c9cu: goto label_367c9c;
        default: break;
    }

    ctx->pc = 0x3676d0u;

label_3676d0:
    // 0x3676d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3676d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3676d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3676d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3676d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3676dc: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x3676dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x3676e0: 0x26106448  addiu       $s0, $s0, 0x6448
    ctx->pc = 0x3676e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25672));
    // 0x3676e4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3676e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3676e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3676e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3676ec: 0xc04a151  jal         func_128544
    ctx->pc = 0x3676ECu;
    SET_GPR_U32(ctx, 31, 0x3676F4u);
    ctx->pc = 0x3676F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676ECu;
    // 0x3676f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x3676ECu, 0x3676F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676F4u;
label_3676f4:
    // 0x3676f4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3676f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3676f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3676f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676fc: 0xc04a151  jal         func_128544
    ctx->pc = 0x3676FCu;
    SET_GPR_U32(ctx, 31, 0x367704u);
    ctx->pc = 0x367700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676FCu;
    // 0x367700: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x3676FCu, 0x367704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367704u;
label_367704:
    // 0x367704: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x367704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x367708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36770c: 0xc04a151  jal         func_128544
    ctx->pc = 0x36770Cu;
    SET_GPR_U32(ctx, 31, 0x367714u);
    ctx->pc = 0x367710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36770Cu;
    // 0x367710: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x36770Cu, 0x367714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367714u;
label_367714:
    // 0x367714: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x367714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x367718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x367718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36771c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x367720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367724: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x367724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x367728: 0x804a151  j           func_128544
    ctx->pc = 0x367728u;
    ctx->pc = 0x36772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367728u;
    // 0x36772c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    sub_00128544_0x128544(rdram, ctx, runtime); return;
    ctx->pc = 0x367730u;
    // 0x367730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x367734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367738: 0xc0d9d40  jal         func_367500
    ctx->pc = 0x367738u;
    SET_GPR_U32(ctx, 31, 0x367740u);
    ctx->pc = 0x367500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367500u, 0x367738u, 0x367740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367740u;
label_367740:
    // 0x367740: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x367740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x367744: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x367744u;
    {
        const bool branch_taken_0x367744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x367748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367744u;
        // 0x367748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367744) {
            ctx->pc = 0x367764u;
            goto label_367764;
        }
    }
    ctx->pc = 0x36774Cu;
    // 0x36774c: 0xc0d9db4  jal         func_3676D0
    ctx->pc = 0x36774Cu;
    SET_GPR_U32(ctx, 31, 0x367754u);
    ctx->pc = 0x3676D0u;
    goto label_3676d0;
    ctx->pc = 0x367754u;
label_367754:
    // 0x367754: 0xc0da14e  jal         func_368538
    ctx->pc = 0x367754u;
    SET_GPR_U32(ctx, 31, 0x36775Cu);
    ctx->pc = 0x368538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368538u, 0x367754u, 0x36775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36775Cu;
label_36775c:
    // 0x36775c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36775cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_367764:
    // 0x367764: 0x3e00008  jr          $ra
    ctx->pc = 0x367764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367764u;
        // 0x367768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36776Cu;
    // 0x36776c: 0x0  nop
    ctx->pc = 0x36776cu;
    // NOP
    // 0x367770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x367774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367778: 0xc0d9d40  jal         func_367500
    ctx->pc = 0x367778u;
    SET_GPR_U32(ctx, 31, 0x367780u);
    ctx->pc = 0x367500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367500u, 0x367778u, 0x367780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367780u;
label_367780:
    // 0x367780: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x367780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x367784: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x367784u;
    {
        const bool branch_taken_0x367784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x367788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367784u;
        // 0x367788: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367784) {
            ctx->pc = 0x3677A4u;
            goto label_3677a4;
        }
    }
    ctx->pc = 0x36778Cu;
    // 0x36778c: 0xc0d9db4  jal         func_3676D0
    ctx->pc = 0x36778Cu;
    SET_GPR_U32(ctx, 31, 0x367794u);
    ctx->pc = 0x3676D0u;
    goto label_3676d0;
    ctx->pc = 0x367794u;
label_367794:
    // 0x367794: 0xc0da14e  jal         func_368538
    ctx->pc = 0x367794u;
    SET_GPR_U32(ctx, 31, 0x36779Cu);
    ctx->pc = 0x368538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368538u, 0x367794u, 0x36779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36779Cu;
label_36779c:
    // 0x36779c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36779cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3677a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3677a4:
    // 0x3677a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3677A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3677A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677A4u;
        // 0x3677a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3677A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3677ACu;
    // 0x3677ac: 0x0  nop
    ctx->pc = 0x3677acu;
    // NOP
    // 0x3677b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3677b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3677b4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x3677b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x3677b8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3677b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3677bc: 0x24716428  addiu       $s1, $v1, 0x6428
    ctx->pc = 0x3677bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25640));
    // 0x3677c0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3677c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3677c4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3677c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x3677c8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x3677c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x3677cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3677ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1D6428u));
    // 0x3677d0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3677D0u;
    {
        const bool branch_taken_0x3677d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3677d0) {
            ctx->pc = 0x3677D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3677D0u;
            // 0x3677d4: 0x3c03001d  lui         $v1, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367804u;
            goto label_367804;
        }
    }
    ctx->pc = 0x3677D8u;
    // 0x3677d8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3677d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3677dc: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x3677dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x3677e0: 0xc0da27a  jal         func_3689E8
    ctx->pc = 0x3677E0u;
    SET_GPR_U32(ctx, 31, 0x3677E8u);
    ctx->pc = 0x3677E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677E0u;
    // 0x3677e4: 0x26107a20  addiu       $s0, $s0, 0x7A20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3689E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3689E8u, 0x3677E0u, 0x3677E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677E8u;
label_3677e8:
    // 0x3677e8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x3677e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x3677ec: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3677ECu;
    SET_GPR_U32(ctx, 31, 0x3677F4u);
    ctx->pc = 0x3677F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677ECu;
    // 0x3677f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3677ECu, 0x3677F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677F4u;
label_3677f4:
    // 0x3677f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3677f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677f8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3677F8u;
    SET_GPR_U32(ctx, 31, 0x367800u);
    ctx->pc = 0x3677FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677F8u;
    // 0x3677fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3677F8u, 0x367800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367800u;
label_367800:
    // 0x367800: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x367800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_367804:
    // 0x367804: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x367804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x367808: 0x24526b38  addiu       $s2, $v0, 0x6B38
    ctx->pc = 0x367808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27448));
    // 0x36780c: 0x24716478  addiu       $s1, $v1, 0x6478
    ctx->pc = 0x36780cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25720));
    // 0x367810: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367814: 0x0  nop
    ctx->pc = 0x367814u;
    // NOP
label_367818:
    // 0x367818: 0xc0d7432  jal         func_35D0C8
    ctx->pc = 0x367818u;
    SET_GPR_U32(ctx, 31, 0x367820u);
    ctx->pc = 0x36781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367818u;
    // 0x36781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0C8u, 0x367818u, 0x367820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367820u;
label_367820:
    // 0x367820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367824: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x367824u;
    {
        const bool branch_taken_0x367824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367824u;
        // 0x367828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367824) {
            ctx->pc = 0x367878u;
            goto label_367878;
        }
    }
    ctx->pc = 0x36782Cu;
    // 0x36782c: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x36782Cu;
    SET_GPR_U32(ctx, 31, 0x367834u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x36782Cu, 0x367834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367834u;
label_367834:
    // 0x367834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x367834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367838: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x367838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36783c: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x36783cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x367840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x367840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367844: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x367844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x367848: 0xc0d9f40  jal         func_367D00
    ctx->pc = 0x367848u;
    SET_GPR_U32(ctx, 31, 0x367850u);
    ctx->pc = 0x36784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367848u;
    // 0x36784c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367D00u, 0x367848u, 0x367850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367850u;
label_367850:
    // 0x367850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367854: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x367854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367858: 0x87a50074  lh          $a1, 0x74($sp)
    ctx->pc = 0x367858u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x36785c: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x36785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367860: 0xc0d7256  jal         func_35C958
    ctx->pc = 0x367860u;
    SET_GPR_U32(ctx, 31, 0x367868u);
    ctx->pc = 0x367864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367860u;
    // 0x367864: 0x93a6007c  lbu         $a2, 0x7C($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C958u, 0x367860u, 0x367868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367868u;
label_367868:
    // 0x367868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367868u;
    {
        const bool branch_taken_0x367868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367868u;
        // 0x36786c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367868) {
            ctx->pc = 0x36787Cu;
            goto label_36787c;
        }
    }
    ctx->pc = 0x367870u;
    // 0x367870: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x367870u;
    {
        const bool branch_taken_0x367870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367870u;
        // 0x367874: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367870) {
            ctx->pc = 0x367890u;
            goto label_367890;
        }
    }
    ctx->pc = 0x367878u;
label_367878:
    // 0x367878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x367878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36787c:
    // 0x36787c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x36787cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x367880: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x367880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x367884: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x367884u;
    {
        const bool branch_taken_0x367884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367884u;
        // 0x367888: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367884) {
            ctx->pc = 0x367818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367818;
        }
    }
    ctx->pc = 0x36788Cu;
    // 0x36788c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36788cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367890:
    // 0x367890: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x367890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367894: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x367894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x367898: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x367898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36789c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x36789cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3678a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3678A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3678A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678A0u;
        // 0x3678a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3678A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3678A8u;
    // 0x3678a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3678a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3678ac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3678acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3678b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3678b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3678b4: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x3678b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3678b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3678b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3678bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3678bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3678c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3678c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3678c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3678c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3678cc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3678ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3678d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3678d4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3678d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3678d8: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x3678D8u;
    SET_GPR_U32(ctx, 31, 0x3678E0u);
    ctx->pc = 0x3678DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3678D8u;
    // 0x3678dc: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x3678D8u, 0x3678E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678E0u;
label_3678e0:
    // 0x3678e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3678e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3678e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3678e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3678e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3678ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3678f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3678f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3678f4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3678f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3678f8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3678f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678fc: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x3678fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367908: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x367908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36790c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36790cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367910: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x367910u;
    {
        const bool branch_taken_0x367910 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x367914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367910u;
        // 0x367914: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367910) {
            ctx->pc = 0x367924u;
            goto label_367924;
        }
    }
    ctx->pc = 0x367918u;
    // 0x367918: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x367918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x36791c: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x36791Cu;
    SET_GPR_U32(ctx, 31, 0x367924u);
    ctx->pc = 0x367920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36791Cu;
    // 0x367920: 0xafb40008  sw          $s4, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x36791Cu, 0x367924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367924u;
label_367924:
    // 0x367924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x367924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x367928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36792c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36792cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367930: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x367930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367934: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x367934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367938: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x367938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36793c: 0x3e00008  jr          $ra
    ctx->pc = 0x36793Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36793Cu;
        // 0x367940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36793Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367944u;
    // 0x367944: 0x0  nop
    ctx->pc = 0x367944u;
    // NOP
    // 0x367948: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x367948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36794c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x36794cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367950: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x367950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x367954: 0x68400  sll         $s0, $a2, 16
    ctx->pc = 0x367954u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x367958: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x367958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36795c: 0x78c00  sll         $s1, $a3, 16
    ctx->pc = 0x36795cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x367960: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x367960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x367964: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x367964u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367968: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x367968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36796c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x36796cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367970: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x367970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x367974: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x367974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367978: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x367978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x36797c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x36797cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367980: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x367980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x367984: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x367984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367988: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x367988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36798c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x36798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x367990: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x367990u;
    SET_GPR_U32(ctx, 31, 0x367998u);
    ctx->pc = 0x367994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367990u;
    // 0x367994: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x367990u, 0x367998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367998u;
label_367998:
    // 0x367998: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x367998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36799c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3679a0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3679a0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3679a4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3679a4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3679a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3679a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3679ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3679acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3679b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3679b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3679b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3679b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679bc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3679bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679c0: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x3679c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3679c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3679c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3679c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679cc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3679CCu;
    {
        const bool branch_taken_0x3679cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3679D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679CCu;
        // 0x3679d0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679cc) {
            ctx->pc = 0x3679E0u;
            goto label_3679e0;
        }
    }
    ctx->pc = 0x3679D4u;
    // 0x3679d4: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x3679d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x3679d8: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x3679D8u;
    SET_GPR_U32(ctx, 31, 0x3679E0u);
    ctx->pc = 0x3679DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3679D8u;
    // 0x3679dc: 0xafb60008  sw          $s6, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x3679D8u, 0x3679E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679E0u;
label_3679e0:
    // 0x3679e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3679e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3679e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3679e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3679e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3679e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3679ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3679ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3679f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3679f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3679f4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3679f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3679f8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3679f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3679fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3679fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x367a00: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x367a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367a04: 0x3e00008  jr          $ra
    ctx->pc = 0x367A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A04u;
        // 0x367a08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367A0Cu;
    // 0x367a0c: 0x0  nop
    ctx->pc = 0x367a0cu;
    // NOP
    // 0x367a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x367a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x367a18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x367a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x367a1c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x367a1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a24: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x367a24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a2c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x367a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x367a30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x367a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367a34: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x367a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x367a38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367a38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a3c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x367a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367a40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367a44: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x367A44u;
    SET_GPR_U32(ctx, 31, 0x367A4Cu);
    ctx->pc = 0x367A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367A44u;
    // 0x367a48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x367A44u, 0x367A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A4Cu;
label_367a4c:
    // 0x367a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367a50: 0x3e00008  jr          $ra
    ctx->pc = 0x367A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A50u;
        // 0x367a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367A58u;
    // 0x367a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367a5c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x367a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a60: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x367a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x367a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367a68: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x367a68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x367a6c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x367a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x367a70: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x367a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x367a74: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x367a74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a78: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x367a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x367a7c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x367a7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367a80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a84: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x367a84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x367a88: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x367a88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x367a8c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x367a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367a94: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x367A94u;
    SET_GPR_U32(ctx, 31, 0x367A9Cu);
    ctx->pc = 0x367A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367A94u;
    // 0x367a98: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x367A94u, 0x367A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A9Cu;
label_367a9c:
    // 0x367a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x367AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AA0u;
        // 0x367aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367AA8u;
    // 0x367aa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x367aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x367aac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x367aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367ab0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x367ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x367ab4: 0x68600  sll         $s0, $a2, 24
    ctx->pc = 0x367ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x367ab8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x367ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x367abc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x367abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367ac0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x367ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x367ac4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x367ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ac8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x367ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x367acc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x367accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ad0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x367ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x367ad4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x367ad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ad8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x367ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x367adc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x367adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x367ae0: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x367AE0u;
    SET_GPR_U32(ctx, 31, 0x367AE8u);
    ctx->pc = 0x367AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AE0u;
    // 0x367ae4: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x367AE0u, 0x367AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AE8u;
label_367ae8:
    // 0x367ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x367ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367aec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x367aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x367af0: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x367af0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x367af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x367af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367af8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x367af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x367afc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x367afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x367b00: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x367b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x367b04: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x367b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b08: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x367b08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b0c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x367b0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367b18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b1c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x367B1Cu;
    {
        const bool branch_taken_0x367b1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x367B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B1Cu;
        // 0x367b20: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b1c) {
            ctx->pc = 0x367B30u;
            goto label_367b30;
        }
    }
    ctx->pc = 0x367B24u;
    // 0x367b24: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x367b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x367b28: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x367B28u;
    SET_GPR_U32(ctx, 31, 0x367B30u);
    ctx->pc = 0x367B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B28u;
    // 0x367b2c: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x367B28u, 0x367B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B30u;
label_367b30:
    // 0x367b30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x367b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367b34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x367b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367b38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x367b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367b3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x367b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367b40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x367b40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367b44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x367b44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367b48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x367b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x367B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B4Cu;
        // 0x367b50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367B54u;
    // 0x367b54: 0x0  nop
    ctx->pc = 0x367b54u;
    // NOP
    // 0x367b58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x367b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x367b5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x367b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367b60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x367b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x367b64: 0x78400  sll         $s0, $a3, 16
    ctx->pc = 0x367b64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x367b68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x367b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x367b6c: 0x88c00  sll         $s1, $t0, 16
    ctx->pc = 0x367b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x367b70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x367b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x367b74: 0x69600  sll         $s2, $a2, 24
    ctx->pc = 0x367b74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x367b78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x367b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x367b7c: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x367b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367b80: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x367b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x367b84: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x367b84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b88: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x367b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x367b8c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x367b8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x367b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x367b94: 0x129603  sra         $s2, $s2, 24
    ctx->pc = 0x367b94u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 24));
    // 0x367b98: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x367b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x367b9c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x367b9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ba0: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x367ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x367ba4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x367ba4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x367ba8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x367ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x367bac: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x367bacu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x367bb0: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x367BB0u;
    SET_GPR_U32(ctx, 31, 0x367BB8u);
    ctx->pc = 0x367BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BB0u;
    // 0x367bb4: 0x8fb60060  lw          $s6, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x367BB0u, 0x367BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BB8u;
label_367bb8:
    // 0x367bb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x367bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x367bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x367bc0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x367bc0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x367bc4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x367bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x367bc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x367bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x367bccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x367bd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x367bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bd8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x367bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bdc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x367bdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367be0: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x367be0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367be4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367be8: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x367BE8u;
    {
        const bool branch_taken_0x367be8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x367BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BE8u;
        // 0x367bec: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367be8) {
            ctx->pc = 0x367C28u;
            goto label_367c28;
        }
    }
    ctx->pc = 0x367BF0u;
    // 0x367bf0: 0xafb60068  sw          $s6, 0x68($sp)
    ctx->pc = 0x367bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 22));
    // 0x367bf4: 0xafb70060  sw          $s7, 0x60($sp)
    ctx->pc = 0x367bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 23));
    // 0x367bf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x367bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367bfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x367bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x367c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367c04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x367c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367c08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x367c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367c0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x367c0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367c10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x367c10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367c14: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x367c14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x367c18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x367c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367c1c: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x367c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367c20: 0x80da37e  j           func_368DF8
    ctx->pc = 0x367C20u;
    ctx->pc = 0x367C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C20u;
    // 0x367c24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    sub_00368DF8_0x368df8(rdram, ctx, runtime); return;
    ctx->pc = 0x367C28u;
label_367c28:
    // 0x367c28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x367c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367c2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x367c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x367c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367c34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x367c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367c38: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x367c38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367c3c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x367c3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367c40: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x367c40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367c44: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x367c44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x367c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x367c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367c4c: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x367c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367c50: 0x3e00008  jr          $ra
    ctx->pc = 0x367C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C50u;
        // 0x367c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367C58u;
    // 0x367c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367c5c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x367c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c60: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x367c60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x367c64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x367c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x367c68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x367c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x367c6c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x367c6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c70: 0x64603  sra         $t0, $a2, 24
    ctx->pc = 0x367c70u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 24));
    // 0x367c74: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x367c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x367c78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c7c: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x367c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x367c80: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x367c80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c88: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x367c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367c8c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x367c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367c94: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x367C94u;
    SET_GPR_U32(ctx, 31, 0x367C9Cu);
    ctx->pc = 0x367C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C94u;
    // 0x367c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x367C94u, 0x367C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C9Cu;
label_367c9c:
    // 0x367c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x367CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CA0u;
        // 0x367ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367CA8u;
    // 0x367ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367cac: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x367cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367cb4: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x367cb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x367cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367cbc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x367cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x367cc0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x367cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cc4: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x367cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x367cc8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x367cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x367ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367cd0: 0x64603  sra         $t0, $a2, 24
    ctx->pc = 0x367cd0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 24));
    // 0x367cd4: 0x73403  sra         $a2, $a3, 16
    ctx->pc = 0x367cd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 16));
    // 0x367cd8: 0xafab0020  sw          $t3, 0x20($sp)
    ctx->pc = 0x367cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 11));
    // 0x367cdc: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x367cdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ce0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ce4: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x367ce4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x367ce8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x367ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367cec: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x367cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367cf0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x367cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x367cf4: 0x80da37e  j           func_368DF8
    ctx->pc = 0x367CF4u;
    ctx->pc = 0x367CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367CF4u;
    // 0x367cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    sub_00368DF8_0x368df8(rdram, ctx, runtime); return;
    ctx->pc = 0x367CFCu;
    // 0x367cfc: 0x0  nop
    ctx->pc = 0x367cfcu;
    // NOP
    ctx->pc = 0x367d00u;
}
