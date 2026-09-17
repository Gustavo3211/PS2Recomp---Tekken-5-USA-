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

// Function: sub_0031B5E8
// Address: 0x31b5e8 - 0x31b640
void sub_0031B5E8_0x31b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B5E8_0x31b5e8");
#endif

    switch (ctx->pc) {
        case 0x31b604u: goto label_31b604;
        default: break;
    }

    ctx->pc = 0x31b5e8u;

    // 0x31b5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b5ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b5f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31b5f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b5fc: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B5FCu;
    SET_GPR_U32(ctx, 31, 0x31B604u);
    ctx->pc = 0x31B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5FCu;
    // 0x31b600: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B5FCu, 0x31B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B604u;
label_31b604:
    // 0x31b604: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31b608: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x31b608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x31b60c: 0x24422480  addiu       $v0, $v0, 0x2480
    ctx->pc = 0x31b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x31b610: 0x24a51478  addiu       $a1, $a1, 0x1478
    ctx->pc = 0x31b610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5240));
    // 0x31b614: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x31b614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x31b618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b61c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x31b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x31b620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31b624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b628: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x31b628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x31b62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b634: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31B634u;
    ctx->pc = 0x31B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B634u;
    // 0x31b638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31B63Cu;
    // 0x31b63c: 0x0  nop
    ctx->pc = 0x31b63cu;
    // NOP
    ctx->pc = 0x31b640u;
}
