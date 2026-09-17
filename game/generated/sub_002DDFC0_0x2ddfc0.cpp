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

// Function: sub_002DDFC0
// Address: 0x2ddfc0 - 0x2de028
void sub_002DDFC0_0x2ddfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDFC0_0x2ddfc0");
#endif

    switch (ctx->pc) {
        case 0x2de00cu: goto label_2de00c;
        case 0x2de018u: goto label_2de018;
        default: break;
    }

    ctx->pc = 0x2ddfc0u;

    // 0x2ddfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddfc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ddfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ddfc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddfcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddfd4: 0x2442f4e4  addiu       $v0, $v0, -0xB1C
    ctx->pc = 0x2ddfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964452));
    // 0x2ddfd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ddfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF4E8u));
    // 0x2ddfe0: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x2ddfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2ddfe4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ddfe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddfe8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DDFE8u;
    {
        const bool branch_taken_0x2ddfe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE8u;
        // 0x2ddfec: 0x28430000  slti        $v1, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfe8) {
            ctx->pc = 0x2DE018u;
            goto label_2de018;
        }
    }
    ctx->pc = 0x2DDFF0u;
    // 0x2ddff0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2ddff0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2ddff4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ddff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ddff8: 0x28450007  slti        $a1, $v0, 0x7
    ctx->pc = 0x2ddff8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ddffc: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x2ddffcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2de000: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x2de000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x2de004: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2DE004u;
    SET_GPR_U32(ctx, 31, 0x2DE00Cu);
    ctx->pc = 0x2DE008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE004u;
    // 0x2de008: 0x8205006c  lb          $a1, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2DE004u, 0x2DE00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE00Cu;
label_2de00c:
    // 0x2de00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de010: 0xc0b780a  jal         func_2DE028
    ctx->pc = 0x2DE010u;
    SET_GPR_U32(ctx, 31, 0x2DE018u);
    ctx->pc = 0x2DE014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE010u;
    // 0x2de014: 0x8c85006c  lw          $a1, 0x6C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE028u, 0x2DE010u, 0x2DE018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE018u;
label_2de018:
    // 0x2de018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de01c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2de01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de020: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE020u;
        // 0x2de024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE028u;
}
