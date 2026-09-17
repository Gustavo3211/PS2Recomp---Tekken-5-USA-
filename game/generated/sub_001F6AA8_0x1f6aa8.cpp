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

// Function: sub_001F6AA8
// Address: 0x1f6aa8 - 0x1f6b10
void sub_001F6AA8_0x1f6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6AA8_0x1f6aa8");
#endif

    switch (ctx->pc) {
        case 0x1f6ac4u: goto label_1f6ac4;
        default: break;
    }

    ctx->pc = 0x1f6aa8u;

    // 0x1f6aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f6ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ab4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f6abc: 0xc08215c  jal         func_208570
    ctx->pc = 0x1F6ABCu;
    SET_GPR_U32(ctx, 31, 0x1F6AC4u);
    ctx->pc = 0x1F6AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6ABCu;
    // 0x1f6ac0: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x1F6ABCu, 0x1F6AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AC4u;
label_1f6ac4:
    // 0x1f6ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6ac8: 0x26040848  addiu       $a0, $s0, 0x848
    ctx->pc = 0x1f6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2120));
    // 0x1f6acc: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6ACCu;
    {
        const bool branch_taken_0x1f6acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ACCu;
        // 0x1f6ad0: 0x26100834  addiu       $s0, $s0, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6acc) {
            ctx->pc = 0x1F6AFCu;
            goto label_1f6afc;
        }
    }
    ctx->pc = 0x1F6AD4u;
    // 0x1f6ad4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f6ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f6ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6adc: 0xa6110006  sh          $s1, 0x6($s0)
    ctx->pc = 0x1f6adcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x1f6ae0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1f6ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1f6ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6ae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6aec: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1f6aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6af0: 0xa4910006  sh          $s1, 0x6($a0)
    ctx->pc = 0x1f6af0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x1f6af4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f6af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f6af8: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1f6af8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
label_1f6afc:
    // 0x1f6afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B08u;
        // 0x1f6b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B10u;
}
