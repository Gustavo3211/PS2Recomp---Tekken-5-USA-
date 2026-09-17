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

// Function: sub_002968F0
// Address: 0x2968f0 - 0x2969f0
void sub_002968F0_0x2968f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002968F0_0x2968f0");
#endif

    switch (ctx->pc) {
        case 0x29693cu: goto label_29693c;
        case 0x29694cu: goto label_29694c;
        case 0x296958u: goto label_296958;
        case 0x296978u: goto label_296978;
        case 0x296988u: goto label_296988;
        case 0x2969b0u: goto label_2969b0;
        default: break;
    }

    ctx->pc = 0x2968f0u;

    // 0x2968f0: 0x8f83b5d0  lw          $v1, -0x4A30($gp)
    ctx->pc = 0x2968f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948304)));
    // 0x2968f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2968f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2968f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2968f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2968fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2968fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x296904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296908: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29690c: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x29690Cu;
    {
        const bool branch_taken_0x29690c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29690Cu;
        // 0x296910: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29690c) {
            ctx->pc = 0x2969D8u;
            goto label_2969d8;
        }
    }
    ctx->pc = 0x296914u;
    // 0x296914: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x296914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x296918: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x296918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29691c: 0x10720018  beq         $v1, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x29691Cu;
    {
        const bool branch_taken_0x29691c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x296920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29691Cu;
        // 0x296920: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29691c) {
            ctx->pc = 0x296980u;
            goto label_296980;
        }
    }
    ctx->pc = 0x296924u;
    // 0x296924: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x296924u;
    {
        const bool branch_taken_0x296924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296924) {
            ctx->pc = 0x2969A8u;
            goto label_2969a8;
        }
    }
    ctx->pc = 0x29692Cu;
    // 0x29692c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x29692Cu;
    {
        const bool branch_taken_0x29692c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29692c) {
            ctx->pc = 0x2969A8u;
            goto label_2969a8;
        }
    }
    ctx->pc = 0x296934u;
    // 0x296934: 0xc089622  jal         func_225888
    ctx->pc = 0x296934u;
    SET_GPR_U32(ctx, 31, 0x29693Cu);
    ctx->pc = 0x296938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296934u;
    // 0x296938: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x296934u, 0x29693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29693Cu;
label_29693c:
    // 0x29693c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x29693Cu;
    {
        const bool branch_taken_0x29693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29693c) {
            ctx->pc = 0x296940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29693Cu;
            // 0x296940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2969D8u;
            goto label_2969d8;
        }
    }
    ctx->pc = 0x296944u;
    // 0x296944: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x296944u;
    SET_GPR_U32(ctx, 31, 0x29694Cu);
    ctx->pc = 0x296948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296944u;
    // 0x296948: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x296944u, 0x29694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29694Cu;
label_29694c:
    // 0x29694c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296950: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x296950u;
    SET_GPR_U32(ctx, 31, 0x296958u);
    ctx->pc = 0x296954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296950u;
    // 0x296954: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x296950u, 0x296958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296958u;
label_296958:
    // 0x296958: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x296958u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x29695c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29695cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296968: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x29696c: 0x240800f4  addiu       $t0, $zero, 0xF4
    ctx->pc = 0x29696cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x296970: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x296970u;
    SET_GPR_U32(ctx, 31, 0x296978u);
    ctx->pc = 0x296974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296970u;
    // 0x296974: 0x35291000  ori         $t1, $t1, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x296970u, 0x296978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296978u;
label_296978:
    // 0x296978: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x296978u;
    {
        const bool branch_taken_0x296978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296978u;
        // 0x29697c: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296978) {
            ctx->pc = 0x2969D4u;
            goto label_2969d4;
        }
    }
    ctx->pc = 0x296980u;
label_296980:
    // 0x296980: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x296980u;
    SET_GPR_U32(ctx, 31, 0x296988u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x296980u, 0x296988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296988u;
label_296988:
    // 0x296988: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x296988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x29698c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29698Cu;
    {
        const bool branch_taken_0x29698c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29698Cu;
        // 0x296990: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29698c) {
            ctx->pc = 0x2969D4u;
            goto label_2969d4;
        }
    }
    ctx->pc = 0x296994u;
    // 0x296994: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x296994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x296998: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x296998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29699c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2969a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2969A0u;
    {
        const bool branch_taken_0x2969a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969A0u;
        // 0x2969a4: 0xae240048  sw          $a0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969a0) {
            ctx->pc = 0x2969D0u;
            goto label_2969d0;
        }
    }
    ctx->pc = 0x2969A8u;
label_2969a8:
    // 0x2969a8: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2969A8u;
    SET_GPR_U32(ctx, 31, 0x2969B0u);
    ctx->pc = 0x2969ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969A8u;
    // 0x2969ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2969A8u, 0x2969B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969B0u;
label_2969b0:
    // 0x2969b0: 0x8f82b5cc  lw          $v0, -0x4A34($gp)
    ctx->pc = 0x2969b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948300)));
    // 0x2969b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2969B4u;
    {
        const bool branch_taken_0x2969b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969B4u;
        // 0x2969b8: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969b4) {
            ctx->pc = 0x2969C8u;
            goto label_2969c8;
        }
    }
    ctx->pc = 0x2969BCu;
    // 0x2969bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2969BCu;
    {
        const bool branch_taken_0x2969bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969BCu;
        // 0x2969c0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969bc) {
            ctx->pc = 0x2969D0u;
            goto label_2969d0;
        }
    }
    ctx->pc = 0x2969C4u;
    // 0x2969c4: 0x0  nop
    ctx->pc = 0x2969c4u;
    // NOP
label_2969c8:
    // 0x2969c8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2969c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2969cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2969ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2969d0:
    // 0x2969d0: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2969d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2969d4:
    // 0x2969d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2969d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2969d8:
    // 0x2969d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2969d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2969dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2969dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2969e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2969e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2969e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2969e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2969e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2969E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2969ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969E8u;
        // 0x2969ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2969E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2969F0u;
}
