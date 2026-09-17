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

// Function: sub_00262AD0
// Address: 0x262ad0 - 0x262b18
void sub_00262AD0_0x262ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262AD0_0x262ad0");
#endif

    ctx->pc = 0x262ad0u;

    // 0x262ad0: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x262ad0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262ad4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262ad8: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x262ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x262adc: 0x30a503ff  andi        $a1, $a1, 0x3FF
    ctx->pc = 0x262adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x262ae0: 0x31683  sra         $v0, $v1, 26
    ctx->pc = 0x262ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 26));
    // 0x262ae4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x262ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x262ae8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x262ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x262aec: 0x31fc0  sll         $v1, $v1, 31
    ctx->pc = 0x262aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
    // 0x262af0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x262af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x262af4: 0x52b40  sll         $a1, $a1, 13
    ctx->pc = 0x262af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 13));
    // 0x262af8: 0x215c0  sll         $v0, $v0, 23
    ctx->pc = 0x262af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x262afc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x262afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x262b00: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x262b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x262b04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x262b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x262b08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x262b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x262B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B0Cu;
        // 0x262b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262B14u;
    // 0x262b14: 0x0  nop
    ctx->pc = 0x262b14u;
    // NOP
    ctx->pc = 0x262b18u;
}
