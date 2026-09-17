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

// Function: sub_0021C178
// Address: 0x21c178 - 0x21c210
void sub_0021C178_0x21c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C178_0x21c178");
#endif

    switch (ctx->pc) {
        case 0x21c19cu: goto label_21c19c;
        case 0x21c1b0u: goto label_21c1b0;
        case 0x21c1f0u: goto label_21c1f0;
        default: break;
    }

    ctx->pc = 0x21c178u;

    // 0x21c178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c17c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c180: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21c180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c184: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c188: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21c188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c190: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c194: 0xc086386  jal         func_218E18
    ctx->pc = 0x21C194u;
    SET_GPR_U32(ctx, 31, 0x21C19Cu);
    ctx->pc = 0x21C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C194u;
    // 0x21c198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E18u, 0x21C194u, 0x21C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C19Cu;
label_21c19c:
    // 0x21c19c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21C1A0u;
    {
        const bool branch_taken_0x21c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1A0u;
        // 0x21c1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1a0) {
            ctx->pc = 0x21C1E8u;
            goto label_21c1e8;
        }
    }
    ctx->pc = 0x21C1A8u;
    // 0x21c1a8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21C1A8u;
    SET_GPR_U32(ctx, 31, 0x21C1B0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21C1A8u, 0x21C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1B0u;
label_21c1b0:
    // 0x21c1b0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21c1b4: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x21c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x21c1b8: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x21c1bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c1c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21c1c4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21c1c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c1cc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x21c1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21c1d0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21c1d4: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x21c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x21c1d8: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21c1dc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21c1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21c1e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21c1e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21c1e4: 0x22bc3  sra         $a1, $v0, 15
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 15));
label_21c1e8:
    // 0x21c1e8: 0xc086396  jal         func_218E58
    ctx->pc = 0x21C1E8u;
    SET_GPR_U32(ctx, 31, 0x21C1F0u);
    ctx->pc = 0x21C1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C1E8u;
    // 0x21c1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21C1E8u, 0x21C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1F0u;
label_21c1f0:
    // 0x21c1f0: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x21c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
    // 0x21c1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c1f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c1fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c200: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c204: 0x3e00008  jr          $ra
    ctx->pc = 0x21C204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C204u;
        // 0x21c208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C20Cu;
    // 0x21c20c: 0x0  nop
    ctx->pc = 0x21c20cu;
    // NOP
    ctx->pc = 0x21c210u;
}
