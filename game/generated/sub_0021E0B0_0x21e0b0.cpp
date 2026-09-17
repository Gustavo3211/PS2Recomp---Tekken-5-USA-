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

// Function: sub_0021E0B0
// Address: 0x21e0b0 - 0x21e130
void sub_0021E0B0_0x21e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E0B0_0x21e0b0");
#endif

    switch (ctx->pc) {
        case 0x21e0e8u: goto label_21e0e8;
        case 0x21e11cu: goto label_21e11c;
        default: break;
    }

    ctx->pc = 0x21e0b0u;

    // 0x21e0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e0b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21e0b8: 0x3c0880ff  lui         $t0, 0x80FF
    ctx->pc = 0x21e0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33023 << 16));
    // 0x21e0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e0c0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x21e0c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21e0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e0c8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x21e0c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0cc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21e0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21e0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0d4: 0x24446d20  addiu       $a0, $v0, 0x6D20
    ctx->pc = 0x21e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27936));
    // 0x21e0d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x21e0d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x21e0dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21e0e0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21E0E0u;
    SET_GPR_U32(ctx, 31, 0x21E0E8u);
    ctx->pc = 0x21E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0E0u;
    // 0x21e0e4: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21E0E0u, 0x21E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0E8u;
label_21e0e8:
    // 0x21e0e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e0ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21e0f0: 0x8c438884  lw          $v1, -0x777C($v0)
    ctx->pc = 0x21e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8884u));
    // 0x21e0f4: 0x14700006  bne         $v1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E0F4u;
    {
        const bool branch_taken_0x21e0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x21E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0F4u;
        // 0x21e0f8: 0x24846d40  addiu       $a0, $a0, 0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0f4) {
            ctx->pc = 0x21E110u;
            goto label_21e110;
        }
    }
    ctx->pc = 0x21E0FCu;
    // 0x21e0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e104: 0x80b640e  j           func_2D9038
    ctx->pc = 0x21E104u;
    ctx->pc = 0x21E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E104u;
    // 0x21e108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x21E10Cu;
    // 0x21e10c: 0x0  nop
    ctx->pc = 0x21e10cu;
    // NOP
label_21e110:
    // 0x21e110: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21e110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21e114: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21E114u;
    SET_GPR_U32(ctx, 31, 0x21E11Cu);
    ctx->pc = 0x21E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E114u;
    // 0x21e118: 0x24846d50  addiu       $a0, $a0, 0x6D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21E114u, 0x21E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E11Cu;
label_21e11c:
    // 0x21e11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e120: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e124: 0x3e00008  jr          $ra
    ctx->pc = 0x21E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E124u;
        // 0x21e128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E12Cu;
    // 0x21e12c: 0x0  nop
    ctx->pc = 0x21e12cu;
    // NOP
    ctx->pc = 0x21e130u;
}
