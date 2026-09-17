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

// Function: sub_00329860
// Address: 0x329860 - 0x3298f0
void sub_00329860_0x329860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329860_0x329860");
#endif

    switch (ctx->pc) {
        case 0x329860u: goto label_329860;
        case 0x329864u: goto label_329864;
        case 0x329868u: goto label_329868;
        case 0x32986cu: goto label_32986c;
        case 0x329870u: goto label_329870;
        case 0x329874u: goto label_329874;
        case 0x329878u: goto label_329878;
        case 0x32987cu: goto label_32987c;
        case 0x329880u: goto label_329880;
        case 0x329884u: goto label_329884;
        case 0x329888u: goto label_329888;
        case 0x32988cu: goto label_32988c;
        case 0x329890u: goto label_329890;
        case 0x329894u: goto label_329894;
        case 0x329898u: goto label_329898;
        case 0x32989cu: goto label_32989c;
        case 0x3298a0u: goto label_3298a0;
        case 0x3298a4u: goto label_3298a4;
        case 0x3298a8u: goto label_3298a8;
        case 0x3298acu: goto label_3298ac;
        case 0x3298b0u: goto label_3298b0;
        case 0x3298b4u: goto label_3298b4;
        case 0x3298b8u: goto label_3298b8;
        case 0x3298bcu: goto label_3298bc;
        case 0x3298c0u: goto label_3298c0;
        case 0x3298c4u: goto label_3298c4;
        case 0x3298c8u: goto label_3298c8;
        case 0x3298ccu: goto label_3298cc;
        case 0x3298d0u: goto label_3298d0;
        case 0x3298d4u: goto label_3298d4;
        case 0x3298d8u: goto label_3298d8;
        case 0x3298dcu: goto label_3298dc;
        case 0x3298e0u: goto label_3298e0;
        case 0x3298e4u: goto label_3298e4;
        case 0x3298e8u: goto label_3298e8;
        case 0x3298ecu: goto label_3298ec;
        default: break;
    }

    ctx->pc = 0x329860u;

label_329860:
    // 0x329860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_329864:
    // 0x329864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329868:
    // 0x329868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32986c:
    // 0x32986c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329870:
    // 0x329870: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x329870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_329874:
    // 0x329874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_329878:
    // 0x329878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32987c:
    // 0x32987c: 0xe60c0008  swc1        $f12, 0x8($s0)
    ctx->pc = 0x32987cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_329880:
    // 0x329880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329884:
    // 0x329884: 0xe60d000c  swc1        $f13, 0xC($s0)
    ctx->pc = 0x329884u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_329888:
    // 0x329888: 0xc0cbaa2  jal         func_32EA88
label_32988c:
    if (ctx->pc == 0x32988Cu) {
        ctx->pc = 0x32988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329888u;
        // 0x32988c: 0xe60e0010  swc1        $f14, 0x10($s0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x329890u;
        goto label_329890;
    }
    ctx->pc = 0x329888u;
    SET_GPR_U32(ctx, 31, 0x329890u);
    ctx->pc = 0x32988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329888u;
    // 0x32988c: 0xe60e0010  swc1        $f14, 0x10($s0) (Delay Slot)
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x329888u, 0x329890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329890u;
label_329890:
    // 0x329890: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x329890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329894:
    // 0x329894: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_329898:
    if (ctx->pc == 0x329898u) {
        ctx->pc = 0x329898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329894u;
        // 0x329898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32989Cu;
        goto label_32989c;
    }
    ctx->pc = 0x329894u;
    {
        const bool branch_taken_0x329894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329894) {
            ctx->pc = 0x329898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329894u;
            // 0x329898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3298E0u;
            goto label_3298e0;
        }
    }
    ctx->pc = 0x32989Cu;
label_32989c:
    // 0x32989c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3298a0:
    // 0x3298a0: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x3298a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3298a4:
    // 0x3298a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3298a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3298a8:
    // 0x3298a8: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x3298a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3298ac:
    // 0x3298ac: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x3298acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_3298b0:
    // 0x3298b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3298b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3298b4:
    // 0x3298b4: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x3298b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
label_3298b8:
    // 0x3298b8: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x3298b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3298bc:
    // 0x3298bc: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x3298bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3298c0:
    // 0x3298c0: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x3298c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3298c4:
    // 0x3298c4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3298c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3298c8:
    // 0x3298c8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3298c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3298cc:
    // 0x3298cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3298ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3298d0:
    // 0x3298d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3298d4:
    // 0x3298d4: 0x60f809  jalr        $v1
label_3298d8:
    if (ctx->pc == 0x3298D8u) {
        ctx->pc = 0x3298D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298D4u;
        // 0x3298d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298DCu;
        goto label_3298dc;
    }
    ctx->pc = 0x3298D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3298DCu);
        ctx->pc = 0x3298D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298D4u;
        // 0x3298d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3298D4u, 0x3298DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3298DCu;
label_3298dc:
    // 0x3298dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3298dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3298e0:
    // 0x3298e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3298e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3298e4:
    // 0x3298e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3298e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3298e8:
    // 0x3298e8: 0x3e00008  jr          $ra
label_3298ec:
    if (ctx->pc == 0x3298ECu) {
        ctx->pc = 0x3298ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298E8u;
        // 0x3298ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298F0u;
        goto label_fallthrough_0x3298e8;
    }
    ctx->pc = 0x3298E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3298ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298E8u;
        // 0x3298ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3298E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3298e8:
    ctx->pc = 0x3298F0u;
}
