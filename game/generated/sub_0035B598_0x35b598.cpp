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

// Function: sub_0035B598
// Address: 0x35b598 - 0x35b630
void sub_0035B598_0x35b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B598_0x35b598");
#endif

    switch (ctx->pc) {
        case 0x35b5a8u: goto label_35b5a8;
        case 0x35b5c8u: goto label_35b5c8;
        case 0x35b5e0u: goto label_35b5e0;
        case 0x35b600u: goto label_35b600;
        case 0x35b614u: goto label_35b614;
        default: break;
    }

    ctx->pc = 0x35b598u;

    // 0x35b598: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35b598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35b59c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B59Cu;
        // 0x35b5a0: 0x8c621340  lw          $v0, 0x1340($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5A4u;
    // 0x35b5a4: 0x0  nop
    ctx->pc = 0x35b5a4u;
    // NOP
label_35b5a8:
    // 0x35b5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35b5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b5b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B5B4u;
    {
        const bool branch_taken_0x35b5b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5B4u;
        // 0x35b5b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5b4) {
            ctx->pc = 0x35B5D8u;
            goto label_35b5d8;
        }
    }
    ctx->pc = 0x35B5BCu;
    // 0x35b5bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b5c0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B5C0u;
    SET_GPR_U32(ctx, 31, 0x35B5C8u);
    ctx->pc = 0x35B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B5C0u;
    // 0x35b5c4: 0x24845388  addiu       $a0, $a0, 0x5388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B5C0u, 0x35B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5C8u;
label_35b5c8:
    // 0x35b5c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35b5cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35B5CCu;
    {
        const bool branch_taken_0x35b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5CCu;
        // 0x35b5d0: 0x34420032  ori         $v0, $v0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5cc) {
            ctx->pc = 0x35B61Cu;
            goto label_35b61c;
        }
    }
    ctx->pc = 0x35B5D4u;
    // 0x35b5d4: 0x0  nop
    ctx->pc = 0x35b5d4u;
    // NOP
label_35b5d8:
    // 0x35b5d8: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x35B5D8u;
    SET_GPR_U32(ctx, 31, 0x35B5E0u);
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x35B5D8u, 0x35B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5E0u;
label_35b5e0:
    // 0x35b5e0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b5e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b5e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35b5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b5ec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B5ECu;
    {
        const bool branch_taken_0x35b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5ECu;
        // 0x35b5f0: 0x248453c0  addiu       $a0, $a0, 0x53C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5ec) {
            ctx->pc = 0x35B608u;
            goto label_35b608;
        }
    }
    ctx->pc = 0x35B5F4u;
    // 0x35b5f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b5f8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B5F8u;
    SET_GPR_U32(ctx, 31, 0x35B600u);
    ctx->pc = 0x35B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B5F8u;
    // 0x35b5fc: 0xac501340  sw          $s0, 0x1340($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B5F8u, 0x35B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B600u;
label_35b600:
    // 0x35b600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35B600u;
    {
        const bool branch_taken_0x35b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B600u;
        // 0x35b604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b600) {
            ctx->pc = 0x35B61Cu;
            goto label_35b61c;
        }
    }
    ctx->pc = 0x35B608u;
label_35b608:
    // 0x35b608: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b60c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B60Cu;
    SET_GPR_U32(ctx, 31, 0x35B614u);
    ctx->pc = 0x35B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B60Cu;
    // 0x35b610: 0x248453e0  addiu       $a0, $a0, 0x53E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B60Cu, 0x35B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B614u;
label_35b614:
    // 0x35b614: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35b618: 0x34420033  ori         $v0, $v0, 0x33
    ctx->pc = 0x35b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51);
label_35b61c:
    // 0x35b61c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b620: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35b620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b624: 0x3e00008  jr          $ra
    ctx->pc = 0x35B624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B624u;
        // 0x35b628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B62Cu;
    // 0x35b62c: 0x0  nop
    ctx->pc = 0x35b62cu;
    // NOP
    ctx->pc = 0x35b630u;
}
