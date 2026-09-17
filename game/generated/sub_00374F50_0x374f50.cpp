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

// Function: sub_00374F50
// Address: 0x374f50 - 0x374fb8
void sub_00374F50_0x374f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374F50_0x374f50");
#endif

    switch (ctx->pc) {
        case 0x374f50u: goto label_374f50;
        case 0x374f54u: goto label_374f54;
        case 0x374f58u: goto label_374f58;
        case 0x374f5cu: goto label_374f5c;
        case 0x374f60u: goto label_374f60;
        case 0x374f64u: goto label_374f64;
        case 0x374f68u: goto label_374f68;
        case 0x374f6cu: goto label_374f6c;
        case 0x374f70u: goto label_374f70;
        case 0x374f74u: goto label_374f74;
        case 0x374f78u: goto label_374f78;
        case 0x374f7cu: goto label_374f7c;
        case 0x374f80u: goto label_374f80;
        case 0x374f84u: goto label_374f84;
        case 0x374f88u: goto label_374f88;
        case 0x374f8cu: goto label_374f8c;
        case 0x374f90u: goto label_374f90;
        case 0x374f94u: goto label_374f94;
        case 0x374f98u: goto label_374f98;
        case 0x374f9cu: goto label_374f9c;
        case 0x374fa0u: goto label_374fa0;
        case 0x374fa4u: goto label_374fa4;
        case 0x374fa8u: goto label_374fa8;
        case 0x374facu: goto label_374fac;
        case 0x374fb0u: goto label_374fb0;
        case 0x374fb4u: goto label_374fb4;
        default: break;
    }

    ctx->pc = 0x374f50u;

label_374f50:
    // 0x374f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_374f54:
    // 0x374f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_374f58:
    // 0x374f58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x374f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_374f5c:
    // 0x374f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x374f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_374f60:
    // 0x374f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_374f64:
    // 0x374f64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x374f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_374f68:
    // 0x374f68: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x374f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_374f6c:
    // 0x374f6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_374f70:
    if (ctx->pc == 0x374F70u) {
        ctx->pc = 0x374F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F6Cu;
        // 0x374f70: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374F74u;
        goto label_374f74;
    }
    ctx->pc = 0x374F6Cu;
    {
        const bool branch_taken_0x374f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F6Cu;
        // 0x374f70: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f6c) {
            ctx->pc = 0x374FA4u;
            goto label_374fa4;
        }
    }
    ctx->pc = 0x374F74u;
label_374f74:
    // 0x374f74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x374f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_374f78:
    // 0x374f78: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_374f7c:
    if (ctx->pc == 0x374F7Cu) {
        ctx->pc = 0x374F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F78u;
        // 0x374f7c: 0x2222823  subu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374F80u;
        goto label_374f80;
    }
    ctx->pc = 0x374F78u;
    {
        const bool branch_taken_0x374f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x374F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F78u;
        // 0x374f7c: 0x2222823  subu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f78) {
            ctx->pc = 0x374FA4u;
            goto label_374fa4;
        }
    }
    ctx->pc = 0x374F80u;
label_374f80:
    // 0x374f80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x374f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_374f84:
    // 0x374f84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x374f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_374f88:
    // 0x374f88: 0x40f809  jalr        $v0
label_374f8c:
    if (ctx->pc == 0x374F8Cu) {
        ctx->pc = 0x374F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F88u;
        // 0x374f8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374F90u;
        goto label_374f90;
    }
    ctx->pc = 0x374F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374F90u);
        ctx->pc = 0x374F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F88u;
        // 0x374f8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374F88u, 0x374F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374F90u;
label_374f90:
    // 0x374f90: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x374f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_374f94:
    // 0x374f94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x374f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_374f98:
    // 0x374f98: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x374f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_374f9c:
    // 0x374f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x374f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_374fa0:
    // 0x374fa0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x374fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_374fa4:
    // 0x374fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374fa8:
    // 0x374fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_374fac:
    // 0x374fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_374fb0:
    // 0x374fb0: 0x3e00008  jr          $ra
label_374fb4:
    if (ctx->pc == 0x374FB4u) {
        ctx->pc = 0x374FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FB0u;
        // 0x374fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374FB8u;
        goto label_fallthrough_0x374fb0;
    }
    ctx->pc = 0x374FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FB0u;
        // 0x374fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x374fb0:
    ctx->pc = 0x374FB8u;
}
