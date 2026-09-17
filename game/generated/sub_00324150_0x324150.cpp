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

// Function: sub_00324150
// Address: 0x324150 - 0x3241c8
void sub_00324150_0x324150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324150_0x324150");
#endif

    switch (ctx->pc) {
        case 0x324170u: goto label_324170;
        case 0x324184u: goto label_324184;
        case 0x324198u: goto label_324198;
        case 0x3241a0u: goto label_3241a0;
        case 0x3241acu: goto label_3241ac;
        default: break;
    }

    ctx->pc = 0x324150u;

    // 0x324150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324158: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x324158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32415c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324164: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x324164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x324168: 0xc0c933e  jal         func_324CF8
    ctx->pc = 0x324168u;
    SET_GPR_U32(ctx, 31, 0x324170u);
    ctx->pc = 0x32416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324168u;
    // 0x32416c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324CF8u, 0x324168u, 0x324170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324170u;
label_324170:
    // 0x324170: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x324170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324174: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x324174u;
    {
        const bool branch_taken_0x324174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x324178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324174u;
        // 0x324178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324174) {
            ctx->pc = 0x3241ACu;
            goto label_3241ac;
        }
    }
    ctx->pc = 0x32417Cu;
    // 0x32417c: 0xc0d0200  jal         func_340800
    ctx->pc = 0x32417Cu;
    SET_GPR_U32(ctx, 31, 0x324184u);
    ctx->pc = 0x340800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340800u, 0x32417Cu, 0x324184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324184u;
label_324184:
    // 0x324184: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x324184u;
    {
        const bool branch_taken_0x324184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324184u;
        // 0x324188: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324184) {
            ctx->pc = 0x3241ACu;
            goto label_3241ac;
        }
    }
    ctx->pc = 0x32418Cu;
    // 0x32418c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324190: 0xc0c92f2  jal         func_324BC8
    ctx->pc = 0x324190u;
    SET_GPR_U32(ctx, 31, 0x324198u);
    ctx->pc = 0x324194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324190u;
    // 0x324194: 0x26500200  addiu       $s0, $s2, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324BC8u, 0x324190u, 0x324198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324198u;
label_324198:
    // 0x324198: 0xc0d0272  jal         func_3409C8
    ctx->pc = 0x324198u;
    SET_GPR_U32(ctx, 31, 0x3241A0u);
    ctx->pc = 0x32419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324198u;
    // 0x32419c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3409C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3409C8u, 0x324198u, 0x3241A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3241A0u;
label_3241a0:
    // 0x3241a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3241a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3241a4: 0xc0cb1d0  jal         func_32C740
    ctx->pc = 0x3241A4u;
    SET_GPR_U32(ctx, 31, 0x3241ACu);
    ctx->pc = 0x3241A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241A4u;
    // 0x3241a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C740u, 0x3241A4u, 0x3241ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3241ACu;
label_3241ac:
    // 0x3241ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3241acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3241b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3241b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3241b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3241b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3241b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3241b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3241bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3241BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3241C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241BCu;
        // 0x3241c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3241BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3241C4u;
    // 0x3241c4: 0x0  nop
    ctx->pc = 0x3241c4u;
    // NOP
    ctx->pc = 0x3241c8u;
}
