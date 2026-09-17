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

// Function: sub_00305018
// Address: 0x305018 - 0x305070
void sub_00305018_0x305018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305018_0x305018");
#endif

    switch (ctx->pc) {
        case 0x305030u: goto label_305030;
        case 0x305048u: goto label_305048;
        default: break;
    }

    ctx->pc = 0x305018u;

    // 0x305018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30501c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x305024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x305028: 0xc0c1126  jal         func_304498
    ctx->pc = 0x305028u;
    SET_GPR_U32(ctx, 31, 0x305030u);
    ctx->pc = 0x30502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305028u;
    // 0x30502c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304498u, 0x305028u, 0x305030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305030u;
label_305030:
    // 0x305030: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x305030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x305034: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x305034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x305038: 0x24631290  addiu       $v1, $v1, 0x1290
    ctx->pc = 0x305038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4752));
    // 0x30503c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305040: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x305040u;
    SET_GPR_U32(ctx, 31, 0x305048u);
    ctx->pc = 0x305044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305040u;
    // 0x305044: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE150u, 0x305040u, 0x305048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305048u;
label_305048:
    // 0x305048: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x305048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x30504c: 0x24631178  addiu       $v1, $v1, 0x1178
    ctx->pc = 0x30504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4472));
    // 0x305050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305054: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x305054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x305058: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x305058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x30505c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30505cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x305060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305064: 0x3e00008  jr          $ra
    ctx->pc = 0x305064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305064u;
        // 0x305068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30506Cu;
    // 0x30506c: 0x0  nop
    ctx->pc = 0x30506cu;
    // NOP
    ctx->pc = 0x305070u;
}
