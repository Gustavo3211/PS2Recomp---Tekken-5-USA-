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

// Function: sub_00491F08
// Address: 0x491f08 - 0x491fd8
void sub_00491F08_0x491f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491F08_0x491f08");
#endif

    ctx->pc = 0x491f08u;

    // 0x491f08: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x491f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x491f0c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x491f0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491f10: 0x24431500  addiu       $v1, $v0, 0x1500
    ctx->pc = 0x491f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x491f14: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x491f14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491f18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x491f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x491f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x491f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x491f20: 0x8442e804  lh          $v0, -0x17FC($v0)
    ctx->pc = 0x491f20u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x491f24: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x491f24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491f28: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x491F28u;
    {
        const bool branch_taken_0x491f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x491F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491F28u;
        // 0x491f2c: 0xe0702d  daddu       $t6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491f28) {
            ctx->pc = 0x491FD0u;
            goto label_491fd0;
        }
    }
    ctx->pc = 0x491F30u;
    // 0x491f30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x491f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x491f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x491f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x491f38: 0x8442e806  lh          $v0, -0x17FA($v0)
    ctx->pc = 0x491f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961158)));
    // 0x491f3c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x491F3Cu;
    {
        const bool branch_taken_0x491f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491F3Cu;
        // 0x491f40: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491f3c) {
            ctx->pc = 0x491FD0u;
            goto label_491fd0;
        }
    }
    ctx->pc = 0x491F44u;
    // 0x491f44: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x491f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x491f48: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x491f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x491f4c: 0xb2c02  srl         $a1, $t3, 16
    ctx->pc = 0x491f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x491f50: 0x2486005c  addiu       $a2, $a0, 0x5C
    ctx->pc = 0x491f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x491f54: 0xc4402  srl         $t0, $t4, 16
    ctx->pc = 0x491f54u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x491f58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x491f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x491f5c: 0xd4c02  srl         $t1, $t5, 16
    ctx->pc = 0x491f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x491f60: 0xe5402  srl         $t2, $t6, 16
    ctx->pc = 0x491f60u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x491f64: 0x24870080  addiu       $a3, $a0, 0x80
    ctx->pc = 0x491f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x491f68: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491f68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491f6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491f70: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x491f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x491f74: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491f78: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x491f78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x491f7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491f80: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x491f80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x491f84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491f88: 0xa44d0000  sh          $t5, 0x0($v0)
    ctx->pc = 0x491f88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x491f8c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491f90: 0xa44e0000  sh          $t6, 0x0($v0)
    ctx->pc = 0x491f90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x491f94: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491f98: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x491f98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x491f9c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491fa0: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x491fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x491fa4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491fa8: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x491fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x491fac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491fb0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x491fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x491fb4: 0x24840082  addiu       $a0, $a0, 0x82
    ctx->pc = 0x491fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 130));
    // 0x491fb8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x491fb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x491fbc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x491fbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x491fc0: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x491fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x491fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x491fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x491fc8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x491fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491fcc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x491fccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_491fd0:
    // 0x491fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x491FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491FD8u;
}
