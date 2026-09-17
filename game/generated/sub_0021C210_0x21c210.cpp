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

// Function: sub_0021C210
// Address: 0x21c210 - 0x21c2d8
void sub_0021C210_0x21c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C210_0x21c210");
#endif

    switch (ctx->pc) {
        case 0x21c248u: goto label_21c248;
        case 0x21c264u: goto label_21c264;
        case 0x21c270u: goto label_21c270;
        case 0x21c2a0u: goto label_21c2a0;
        case 0x21c2c0u: goto label_21c2c0;
        default: break;
    }

    ctx->pc = 0x21c210u;

    // 0x21c210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c218: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21c218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21c21c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c220: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x21c220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x21c224: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c228: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21c228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c22c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c230: 0x92420031  lbu         $v0, 0x31($s2)
    ctx->pc = 0x21c230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x21c234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c23c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c240: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C240u;
    SET_GPR_U32(ctx, 31, 0x21C248u);
    ctx->pc = 0x21C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C240u;
    // 0x21c244: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C240u, 0x21C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C248u;
label_21c248:
    // 0x21c248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21c248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c24c: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x21c24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x21c250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c254: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c25c: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C25Cu;
    SET_GPR_U32(ctx, 31, 0x21C264u);
    ctx->pc = 0x21C260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C25Cu;
    // 0x21c260: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C25Cu, 0x21C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C264u;
label_21c264:
    // 0x21c264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c268: 0xc08764c  jal         func_21D930
    ctx->pc = 0x21C268u;
    SET_GPR_U32(ctx, 31, 0x21C270u);
    ctx->pc = 0x21C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C268u;
    // 0x21c26c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D930u, 0x21C268u, 0x21C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C270u;
label_21c270:
    // 0x21c270: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x21c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x21c274: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21c278: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x21c278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x21c27c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c280: 0x24508858  addiu       $s0, $v0, -0x77A8
    ctx->pc = 0x21c280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21c284: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x21c284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x21c288: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x21c288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8884u));
    // 0x21c28c: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C28Cu;
    {
        const bool branch_taken_0x21c28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x21C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C28Cu;
        // 0x21c290: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c28c) {
            ctx->pc = 0x21C298u;
            goto label_21c298;
        }
    }
    ctx->pc = 0x21C294u;
    // 0x21c294: 0xa240000e  sb          $zero, 0xE($s2)
    ctx->pc = 0x21c294u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 0));
label_21c298:
    // 0x21c298: 0xc0850f0  jal         func_2143C0
    ctx->pc = 0x21C298u;
    SET_GPR_U32(ctx, 31, 0x21C2A0u);
    ctx->pc = 0x2143C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143C0u, 0x21C298u, 0x21C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2A0u;
label_21c2a0:
    // 0x21c2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c2a4: 0x92430032  lbu         $v1, 0x32($s2)
    ctx->pc = 0x21c2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x21c2a8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x21c2ac: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x21c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21c2b0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21c2b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21c2b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21c2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c2b8: 0xc08510c  jal         func_214430
    ctx->pc = 0x21C2B8u;
    SET_GPR_U32(ctx, 31, 0x21C2C0u);
    ctx->pc = 0x21C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2B8u;
    // 0x21c2bc: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214430u, 0x21C2B8u, 0x21C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2C0u;
label_21c2c0:
    // 0x21c2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c2c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c2c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c2c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c2cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2D0u;
        // 0x21c2d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C2D8u;
}
