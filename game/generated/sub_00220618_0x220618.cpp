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

// Function: sub_00220618
// Address: 0x220618 - 0x2206c0
void sub_00220618_0x220618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220618_0x220618");
#endif

    ctx->pc = 0x220618u;

    // 0x220618: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22061c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x22061cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x220620: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x220620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x220624: 0x24a5d2b8  addiu       $a1, $a1, -0x2D48
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955704));
    // 0x220628: 0x2c860008  sltiu       $a2, $a0, 0x8
    ctx->pc = 0x220628u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22062c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22062cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x220630: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x220630u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x220634: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x220634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x220638: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22063c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x220640: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x220640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220644: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x220644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x220648: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x220648u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x22064c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x22064cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x220650: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x220650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x220654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220658: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22065c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x22065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x220660: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x220660u;
    {
        const bool branch_taken_0x220660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220660u;
        // 0x220664: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220660) {
            ctx->pc = 0x2206B8u;
            goto label_2206b8;
        }
    }
    ctx->pc = 0x220668u;
    // 0x220668: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x220668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22066c: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x22066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x220670: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x220674: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x220674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x220678: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x220678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x22067c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220680: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x220680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220684: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x220684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x220688: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x220688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22068c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x22068cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x220690: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x220690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x220694: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x220694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220698: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x220698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3ACA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ACA40u, _value); } while (0); }
    // 0x22069c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x22069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2206a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2206a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3ACA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ACA44u, _value); } while (0); }
    // 0x2206a4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2206a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2206a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2206a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3ACA4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ACA4Cu, _value); } while (0);
    // 0x2206ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2206acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3ACA48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ACA48u, _value); } while (0); }
    // 0x2206b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2206B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206B0u;
        // 0x2206b4: 0xaf84a4c4  sw          $a0, -0x5B3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943940), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2206B8u;
label_2206b8:
    // 0x2206b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2206B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206B8u;
        // 0x2206bc: 0xaf80a4c4  sw          $zero, -0x5B3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2206C0u;
}
