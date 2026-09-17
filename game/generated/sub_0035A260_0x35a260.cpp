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

// Function: sub_0035A260
// Address: 0x35a260 - 0x35a300
void sub_0035A260_0x35a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A260_0x35a260");
#endif

    switch (ctx->pc) {
        case 0x35a280u: goto label_35a280;
        case 0x35a2b8u: goto label_35a2b8;
        case 0x35a2d8u: goto label_35a2d8;
        default: break;
    }

    ctx->pc = 0x35a260u;

    // 0x35a260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a26c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a270: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a278: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A278u;
    SET_GPR_U32(ctx, 31, 0x35A280u);
    ctx->pc = 0x35A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A278u;
    // 0x35a27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A278u, 0x35A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A280u;
label_35a280:
    // 0x35a280: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a284: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a288: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a28c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a294: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a29c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a2a8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a2ac: 0x80d9572  j           func_3655C8
    ctx->pc = 0x35A2ACu;
    ctx->pc = 0x35A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2ACu;
    // 0x35a2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3655C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3655C8u, 0x35A2ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A2B4u;
    // 0x35a2b4: 0x0  nop
    ctx->pc = 0x35a2b4u;
    // NOP
label_35a2b8:
    // 0x35a2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a2c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35a2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a2cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a2d0: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A2D0u;
    SET_GPR_U32(ctx, 31, 0x35A2D8u);
    ctx->pc = 0x35A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2D0u;
    // 0x35a2d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A2D0u, 0x35A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2D8u;
label_35a2d8:
    // 0x35a2d8: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x35a2d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a2dc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x35a2dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x35a2e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2e8: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a2f4: 0x80d9b26  j           func_366C98
    ctx->pc = 0x35A2F4u;
    ctx->pc = 0x35A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2F4u;
    // 0x35a2f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C98u, 0x35A2F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A2FCu;
    // 0x35a2fc: 0x0  nop
    ctx->pc = 0x35a2fcu;
    // NOP
    ctx->pc = 0x35a300u;
}
