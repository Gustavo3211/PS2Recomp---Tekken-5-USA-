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

// Function: sub_00325CB0
// Address: 0x325cb0 - 0x325d78
void sub_00325CB0_0x325cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325CB0_0x325cb0");
#endif

    switch (ctx->pc) {
        case 0x325d1cu: goto label_325d1c;
        case 0x325d34u: goto label_325d34;
        default: break;
    }

    ctx->pc = 0x325cb0u;

    // 0x325cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325cb4: 0x3c080006  lui         $t0, 0x6
    ctx->pc = 0x325cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)6 << 16));
    // 0x325cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325cbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x325cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325cc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325cc4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x325cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325cc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x325cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325cd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x325cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x325cd4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x325cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x325cd8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x325cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x325cdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x325cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x325ce0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x325ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x325ce4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x325ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x325ce8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x325cec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x325cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x325cf0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x325cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x325cf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x325cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x325cf8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x325cf8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x325cfc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x325cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x325d00: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x325d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x325d04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x325d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x325d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x325d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d0c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x325d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x325d10: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x325d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x325d14: 0xc0c975e  jal         func_325D78
    ctx->pc = 0x325D14u;
    SET_GPR_U32(ctx, 31, 0x325D1Cu);
    ctx->pc = 0x325D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D14u;
    // 0x325d18: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325D78u, 0x325D14u, 0x325D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D1Cu;
label_325d1c:
    // 0x325d1c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x325d1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x325d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d24: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x325d24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x325d28: 0xde230020  ld          $v1, 0x20($s1)
    ctx->pc = 0x325d28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x325d2c: 0xc0d0b7e  jal         func_342DF8
    ctx->pc = 0x325D2Cu;
    SET_GPR_U32(ctx, 31, 0x325D34u);
    ctx->pc = 0x325D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D2Cu;
    // 0x325d30: 0xfe030018  sd          $v1, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DF8u, 0x325D2Cu, 0x325D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D34u;
label_325d34:
    // 0x325d34: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x325d34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x325d38: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x325d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x325d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d40: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x325d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x325d44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x325d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325d48: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x325d48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x325d4c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x325d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x325d50: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x325d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x325d54: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x325d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x325d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325d5c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x325d5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x325d60: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x325d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x325d64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x325d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x325d68: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x325d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x325d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d70: 0x3e00008  jr          $ra
    ctx->pc = 0x325D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D70u;
        // 0x325d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D78u;
}
