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

// Function: sub_00345790
// Address: 0x345790 - 0x345838
void sub_00345790_0x345790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345790_0x345790");
#endif

    switch (ctx->pc) {
        case 0x3457bcu: goto label_3457bc;
        case 0x3457c8u: goto label_3457c8;
        case 0x3457e8u: goto label_3457e8;
        default: break;
    }

    ctx->pc = 0x345790u;

    // 0x345790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345798: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x345798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x34579c: 0x261003a0  addiu       $s0, $s0, 0x3A0
    ctx->pc = 0x34579cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x3457a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3457a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3457a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3457a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3457a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3457a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3457acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3457b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3457b4: 0xc0cbf46  jal         func_32FD18
    ctx->pc = 0x3457B4u;
    SET_GPR_U32(ctx, 31, 0x3457BCu);
    ctx->pc = 0x3457B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457B4u;
    // 0x3457b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD18u, 0x3457B4u, 0x3457BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457BCu;
label_3457bc:
    // 0x3457bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3457bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457c0: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x3457C0u;
    SET_GPR_U32(ctx, 31, 0x3457C8u);
    ctx->pc = 0x3457C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457C0u;
    // 0x3457c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x3457C0u, 0x3457C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457C8u;
label_3457c8:
    // 0x3457c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3457c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457cc: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x3457ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3457d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3457d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3457d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3457d8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3457D8u;
    {
        const bool branch_taken_0x3457d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457D8u;
        // 0x3457dc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457d8) {
            ctx->pc = 0x34581Cu;
            goto label_34581c;
        }
    }
    ctx->pc = 0x3457E0u;
    // 0x3457e0: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x3457E0u;
    SET_GPR_U32(ctx, 31, 0x3457E8u);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x3457E0u, 0x3457E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457E8u;
label_3457e8:
    // 0x3457e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3457e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3457ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3457ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3457f0: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x3457f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x3457f4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3457f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3457f8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3457f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3457fc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3457fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x345800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345808: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x345808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x34580c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x34580cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x345810: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x345810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x345814: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x345814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x345818: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x345818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_34581c:
    // 0x34581c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34581cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345828: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34582c: 0x3e00008  jr          $ra
    ctx->pc = 0x34582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34582Cu;
        // 0x345830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34582Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345834u;
    // 0x345834: 0x0  nop
    ctx->pc = 0x345834u;
    // NOP
    ctx->pc = 0x345838u;
}
