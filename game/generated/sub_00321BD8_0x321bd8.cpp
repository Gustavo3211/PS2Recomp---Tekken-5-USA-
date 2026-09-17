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

// Function: sub_00321BD8
// Address: 0x321bd8 - 0x321c58
void sub_00321BD8_0x321bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321BD8_0x321bd8");
#endif

    switch (ctx->pc) {
        case 0x321c08u: goto label_321c08;
        case 0x321c2cu: goto label_321c2c;
        default: break;
    }

    ctx->pc = 0x321bd8u;

    // 0x321bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321bdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x321be0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x321be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321be4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x321be8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bf0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x321bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bf4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x321bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x321bf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321bfc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x321bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x321c00: 0xc0c76f2  jal         func_31DBC8
    ctx->pc = 0x321C00u;
    SET_GPR_U32(ctx, 31, 0x321C08u);
    ctx->pc = 0x321C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C00u;
    // 0x321c04: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DBC8u, 0x321C00u, 0x321C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C08u;
label_321c08:
    // 0x321c08: 0x26241280  addiu       $a0, $s1, 0x1280
    ctx->pc = 0x321c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4736));
    // 0x321c0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321C0Cu;
    {
        const bool branch_taken_0x321c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C0Cu;
        // 0x321c10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c0c) {
            ctx->pc = 0x321C20u;
            goto label_321c20;
        }
    }
    ctx->pc = 0x321C14u;
    // 0x321c14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321c18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x321C18u;
    {
        const bool branch_taken_0x321c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C18u;
        // 0x321c1c: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c18) {
            ctx->pc = 0x321C40u;
            goto label_321c40;
        }
    }
    ctx->pc = 0x321C20u;
label_321c20:
    // 0x321c20: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321c24: 0xc0cf166  jal         func_33C598
    ctx->pc = 0x321C24u;
    SET_GPR_U32(ctx, 31, 0x321C2Cu);
    ctx->pc = 0x321C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C24u;
    // 0x321c28: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C598u, 0x321C24u, 0x321C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C2Cu;
label_321c2c:
    // 0x321c2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321c34: 0x34424005  ori         $v0, $v0, 0x4005
    ctx->pc = 0x321c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
    // 0x321c38: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x321c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x321c3c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x321c3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_321c40:
    // 0x321c40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321c44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321c48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321c48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321c4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x321c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321c50: 0x3e00008  jr          $ra
    ctx->pc = 0x321C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C50u;
        // 0x321c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321C58u;
}
