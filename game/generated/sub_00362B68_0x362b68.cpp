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

// Function: sub_00362B68
// Address: 0x362b68 - 0x362bd0
void sub_00362B68_0x362b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362B68_0x362b68");
#endif

    switch (ctx->pc) {
        case 0x362b78u: goto label_362b78;
        case 0x362ba8u: goto label_362ba8;
        case 0x362bb4u: goto label_362bb4;
        default: break;
    }

    ctx->pc = 0x362b68u;

    // 0x362b68: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x362b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x362B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B6Cu;
        // 0x362b70: 0x8c625cf8  lw          $v0, 0x5CF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23800)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362B74u;
    // 0x362b74: 0x0  nop
    ctx->pc = 0x362b74u;
    // NOP
label_362b78:
    // 0x362b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x362b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362b80: 0x48400  sll         $s0, $a0, 16
    ctx->pc = 0x362b80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x362b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x362b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x362b88: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x362b88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
    // 0x362b8c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x362b8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x362b90: 0x26315cf0  addiu       $s1, $s1, 0x5CF0
    ctx->pc = 0x362b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23792));
    // 0x362b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x362b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b9c: 0xa6300014  sh          $s0, 0x14($s1)
    ctx->pc = 0x362b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 16));
    // 0x362ba0: 0xc0d80d6  jal         func_360358
    ctx->pc = 0x362BA0u;
    SET_GPR_U32(ctx, 31, 0x362BA8u);
    ctx->pc = 0x362BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BA0u;
    // 0x362ba4: 0xa6300016  sh          $s0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360358u, 0x362BA0u, 0x362BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BA8u;
label_362ba8:
    // 0x362ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bac: 0xc0d80d6  jal         func_360358
    ctx->pc = 0x362BACu;
    SET_GPR_U32(ctx, 31, 0x362BB4u);
    ctx->pc = 0x362BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BACu;
    // 0x362bb0: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x360358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360358u, 0x362BACu, 0x362BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BB4u;
label_362bb4:
    // 0x362bb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bb8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x362bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x362bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x362bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x362BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BC8u;
        // 0x362bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362BD0u;
}
