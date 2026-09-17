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

// Function: sub_00304F58
// Address: 0x304f58 - 0x304fb0
void sub_00304F58_0x304f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304F58_0x304f58");
#endif

    switch (ctx->pc) {
        case 0x304f70u: goto label_304f70;
        case 0x304f88u: goto label_304f88;
        default: break;
    }

    ctx->pc = 0x304f58u;

    // 0x304f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304f68: 0xc0c1126  jal         func_304498
    ctx->pc = 0x304F68u;
    SET_GPR_U32(ctx, 31, 0x304F70u);
    ctx->pc = 0x304F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F68u;
    // 0x304f6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304498u, 0x304F68u, 0x304F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F70u;
label_304f70:
    // 0x304f70: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x304f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x304f74: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x304f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304f78: 0x24631228  addiu       $v1, $v1, 0x1228
    ctx->pc = 0x304f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x304f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f80: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x304F80u;
    SET_GPR_U32(ctx, 31, 0x304F88u);
    ctx->pc = 0x304F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F80u;
    // 0x304f84: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE150u, 0x304F80u, 0x304F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F88u;
label_304f88:
    // 0x304f88: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x304f8c: 0x24631270  addiu       $v1, $v1, 0x1270
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4720));
    // 0x304f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304f94: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x304f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x304f98: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x304f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x304f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x304FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FA4u;
        // 0x304fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304FACu;
    // 0x304fac: 0x0  nop
    ctx->pc = 0x304facu;
    // NOP
    ctx->pc = 0x304fb0u;
}
