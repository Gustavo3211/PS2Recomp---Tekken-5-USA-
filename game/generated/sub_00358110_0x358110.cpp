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

// Function: sub_00358110
// Address: 0x358110 - 0x358188
void sub_00358110_0x358110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358110_0x358110");
#endif

    switch (ctx->pc) {
        case 0x358128u: goto label_358128;
        default: break;
    }

    ctx->pc = 0x358110u;

    // 0x358110: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x358114: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x358114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358118: 0x2443e780  addiu       $v1, $v0, -0x1880
    ctx->pc = 0x358118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x35811c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35811cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358120: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x358120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x358124: 0x0  nop
    ctx->pc = 0x358124u;
    // NOP
label_358128:
    // 0x358128: 0x8062000c  lb          $v0, 0xC($v1)
    ctx->pc = 0x358128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35812c: 0x54470012  bnel        $v0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x35812Cu;
    {
        const bool branch_taken_0x35812c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x35812c) {
            ctx->pc = 0x358130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35812Cu;
            // 0x358130: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358178u;
            goto label_358178;
        }
    }
    ctx->pc = 0x358134u;
    // 0x358134: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x358134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x358138: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x358138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35813c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35813Cu;
    {
        const bool branch_taken_0x35813c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x358140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35813Cu;
        // 0x358140: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35813c) {
            ctx->pc = 0x358158u;
            goto label_358158;
        }
    }
    ctx->pc = 0x358144u;
    // 0x358144: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x358144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358148: 0xa066000c  sb          $a2, 0xC($v1)
    ctx->pc = 0x358148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x35814c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35814Cu;
    {
        const bool branch_taken_0x35814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35814Cu;
        // 0x358150: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35814c) {
            ctx->pc = 0x358174u;
            goto label_358174;
        }
    }
    ctx->pc = 0x358154u;
    // 0x358154: 0x0  nop
    ctx->pc = 0x358154u;
    // NOP
label_358158:
    // 0x358158: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x358158u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35815c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35815cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x358160: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x358160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358164: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x358164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358168: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x358168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35816c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x35816cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x358170: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x358170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_358174:
    // 0x358174: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x358174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_358178:
    // 0x358178: 0x4a1ffeb  bgez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x358178u;
    {
        const bool branch_taken_0x358178 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x35817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358178u;
        // 0x35817c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358178) {
            ctx->pc = 0x358128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358128;
        }
    }
    ctx->pc = 0x358180u;
    // 0x358180: 0x3e00008  jr          $ra
    ctx->pc = 0x358180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358180u;
        // 0x358184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358188u;
}
