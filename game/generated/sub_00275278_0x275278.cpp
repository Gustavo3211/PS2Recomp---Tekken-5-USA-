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

// Function: sub_00275278
// Address: 0x275278 - 0x275388
void sub_00275278_0x275278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275278_0x275278");
#endif

    switch (ctx->pc) {
        case 0x2752a0u: goto label_2752a0;
        case 0x2752acu: goto label_2752ac;
        case 0x2752c0u: goto label_2752c0;
        case 0x2752d0u: goto label_2752d0;
        case 0x2752e0u: goto label_2752e0;
        case 0x2752f4u: goto label_2752f4;
        case 0x27533cu: goto label_27533c;
        default: break;
    }

    ctx->pc = 0x275278u;

    // 0x275278: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x275278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27527c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x27527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x275280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275284: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x275284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x275288: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x275288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27528c: 0x8e2208a0  lw          $v0, 0x8A0($s1)
    ctx->pc = 0x27528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x275290: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x275290u;
    {
        const bool branch_taken_0x275290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275290u;
        // 0x275294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275290) {
            ctx->pc = 0x2752C8u;
            goto label_2752c8;
        }
    }
    ctx->pc = 0x275298u;
    // 0x275298: 0xc08c31a  jal         func_230C68
    ctx->pc = 0x275298u;
    SET_GPR_U32(ctx, 31, 0x2752A0u);
    ctx->pc = 0x230C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C68u, 0x275298u, 0x2752A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752A0u;
label_2752a0:
    // 0x2752a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2752a4: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2752A4u;
    SET_GPR_U32(ctx, 31, 0x2752ACu);
    ctx->pc = 0x2752A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752A4u;
    // 0x2752a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2752A4u, 0x2752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752ACu;
label_2752ac:
    // 0x2752ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2752acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2752b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2752b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2752b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752b8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2752B8u;
    SET_GPR_U32(ctx, 31, 0x2752C0u);
    ctx->pc = 0x2752BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752B8u;
    // 0x2752bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2752B8u, 0x2752C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752C0u;
label_2752c0:
    // 0x2752c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2752C0u;
    {
        const bool branch_taken_0x2752c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752C0u;
        // 0x2752c4: 0x8f82aea4  lw          $v0, -0x515C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752c0) {
            ctx->pc = 0x2752E4u;
            goto label_2752e4;
        }
    }
    ctx->pc = 0x2752C8u;
label_2752c8:
    // 0x2752c8: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2752C8u;
    SET_GPR_U32(ctx, 31, 0x2752D0u);
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2752C8u, 0x2752D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752D0u;
label_2752d0:
    // 0x2752d0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2752d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2752d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2752d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752d8: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2752D8u;
    SET_GPR_U32(ctx, 31, 0x2752E0u);
    ctx->pc = 0x2752DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752D8u;
    // 0x2752dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2752D8u, 0x2752E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752E0u;
label_2752e0:
    // 0x2752e0: 0x8f82aea4  lw          $v0, -0x515C($gp)
    ctx->pc = 0x2752e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946468)));
label_2752e4:
    // 0x2752e4: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2752E4u;
    {
        const bool branch_taken_0x2752e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2752e4) {
            ctx->pc = 0x2752E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2752E4u;
            // 0x2752e8: 0x8e240898  lw          $a0, 0x898($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275364u;
            goto label_275364;
        }
    }
    ctx->pc = 0x2752ECu;
    // 0x2752ec: 0xc07c4c4  jal         func_1F1310
    ctx->pc = 0x2752ECu;
    SET_GPR_U32(ctx, 31, 0x2752F4u);
    ctx->pc = 0x1F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1310u, 0x2752ECu, 0x2752F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752F4u;
label_2752f4:
    // 0x2752f4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2752F4u;
    {
        const bool branch_taken_0x2752f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2752f4) {
            ctx->pc = 0x2752F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2752F4u;
            // 0x2752f8: 0x8e240898  lw          $a0, 0x898($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275364u;
            goto label_275364;
        }
    }
    ctx->pc = 0x2752FCu;
    // 0x2752fc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2752fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275300: 0xc7808c10  lwc1        $f0, -0x73F0($gp)
    ctx->pc = 0x275300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275304: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x275304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275308: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27530c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x27530cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x275310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275314: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x275314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275318: 0x922201ab  lbu         $v0, 0x1AB($s1)
    ctx->pc = 0x275318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 427)));
    // 0x27531c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x27531cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275320: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x275320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275324: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x275324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275328: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x275328u;
    {
        const bool branch_taken_0x275328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275328u;
        // 0x27532c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275328) {
            ctx->pc = 0x275360u;
            goto label_275360;
        }
    }
    ctx->pc = 0x275330u;
    // 0x275330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275334: 0xc08899a  jal         func_222668
    ctx->pc = 0x275334u;
    SET_GPR_U32(ctx, 31, 0x27533Cu);
    ctx->pc = 0x275338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275334u;
    // 0x275338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222668u, 0x275334u, 0x27533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27533Cu;
label_27533c:
    // 0x27533c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27533Cu;
    {
        const bool branch_taken_0x27533c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27533Cu;
        // 0x275340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27533c) {
            ctx->pc = 0x275360u;
            goto label_275360;
        }
    }
    ctx->pc = 0x275344u;
    // 0x275344: 0x8e240898  lw          $a0, 0x898($s1)
    ctx->pc = 0x275344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27534c: 0xac850074  sw          $a1, 0x74($a0)
    ctx->pc = 0x27534cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
    // 0x275350: 0x8e230898  lw          $v1, 0x898($s1)
    ctx->pc = 0x275350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275354: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x275354u;
    {
        const bool branch_taken_0x275354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275354u;
        // 0x275358: 0xac650078  sw          $a1, 0x78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275354) {
            ctx->pc = 0x275374u;
            goto label_275374;
        }
    }
    ctx->pc = 0x27535Cu;
    // 0x27535c: 0x0  nop
    ctx->pc = 0x27535cu;
    // NOP
label_275360:
    // 0x275360: 0x8e240898  lw          $a0, 0x898($s1)
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_275364:
    // 0x275364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275368: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x275368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x27536c: 0x8e230898  lw          $v1, 0x898($s1)
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275370: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x275370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
label_275374:
    // 0x275374: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x275374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275378: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x275378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27537c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27537cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275380: 0x3e00008  jr          $ra
    ctx->pc = 0x275380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275380u;
        // 0x275384: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275388u;
}
