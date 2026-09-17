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

// Function: sub_002FF210
// Address: 0x2ff210 - 0x2ff250
void sub_002FF210_0x2ff210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF210_0x2ff210");
#endif

    switch (ctx->pc) {
        case 0x2ff224u: goto label_2ff224;
        case 0x2ff238u: goto label_2ff238;
        default: break;
    }

    ctx->pc = 0x2ff210u;

    // 0x2ff210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff21c: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x2FF21Cu;
    SET_GPR_U32(ctx, 31, 0x2FF224u);
    ctx->pc = 0x2FF220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF21Cu;
    // 0x2ff220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE150u, 0x2FF21Cu, 0x2FF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF224u;
label_2ff224:
    // 0x2ff224: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ff224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ff228: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2ff228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2ff22c: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x2ff22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x2ff230: 0xc0c00fa  jal         func_3003E8
    ctx->pc = 0x2FF230u;
    SET_GPR_U32(ctx, 31, 0x2FF238u);
    ctx->pc = 0x2FF234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF230u;
    // 0x2ff234: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3003E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3003E8u, 0x2FF230u, 0x2FF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF238u;
label_2ff238:
    // 0x2ff238: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2ff23c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff244: 0x80b2bd6  j           func_2CAF58
    ctx->pc = 0x2FF244u;
    ctx->pc = 0x2FF248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF244u;
    // 0x2ff248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF58u, 0x2FF244u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FF24Cu;
    // 0x2ff24c: 0x0  nop
    ctx->pc = 0x2ff24cu;
    // NOP
    ctx->pc = 0x2ff250u;
}
