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

// Function: sub_00321B58
// Address: 0x321b58 - 0x321bd8
void sub_00321B58_0x321b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321B58_0x321b58");
#endif

    switch (ctx->pc) {
        case 0x321b88u: goto label_321b88;
        case 0x321bacu: goto label_321bac;
        default: break;
    }

    ctx->pc = 0x321b58u;

    // 0x321b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321b5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x321b60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x321b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x321b68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b70: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x321b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b74: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x321b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x321b78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321b7c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x321b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x321b80: 0xc0c76f2  jal         func_31DBC8
    ctx->pc = 0x321B80u;
    SET_GPR_U32(ctx, 31, 0x321B88u);
    ctx->pc = 0x321B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B80u;
    // 0x321b84: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DBC8u, 0x321B80u, 0x321B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B88u;
label_321b88:
    // 0x321b88: 0x26241280  addiu       $a0, $s1, 0x1280
    ctx->pc = 0x321b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4736));
    // 0x321b8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321B8Cu;
    {
        const bool branch_taken_0x321b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B8Cu;
        // 0x321b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b8c) {
            ctx->pc = 0x321BA0u;
            goto label_321ba0;
        }
    }
    ctx->pc = 0x321B94u;
    // 0x321b94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321b98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x321B98u;
    {
        const bool branch_taken_0x321b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B98u;
        // 0x321b9c: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b98) {
            ctx->pc = 0x321BC0u;
            goto label_321bc0;
        }
    }
    ctx->pc = 0x321BA0u;
label_321ba0:
    // 0x321ba0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ba4: 0xc0cf142  jal         func_33C508
    ctx->pc = 0x321BA4u;
    SET_GPR_U32(ctx, 31, 0x321BACu);
    ctx->pc = 0x321BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BA4u;
    // 0x321ba8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C508u, 0x321BA4u, 0x321BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321BACu;
label_321bac:
    // 0x321bac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321bb4: 0x34424005  ori         $v0, $v0, 0x4005
    ctx->pc = 0x321bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
    // 0x321bb8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x321bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x321bbc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x321bbcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_321bc0:
    // 0x321bc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321bc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321bc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321bcc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x321bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x321BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BD0u;
        // 0x321bd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321BD8u;
}
