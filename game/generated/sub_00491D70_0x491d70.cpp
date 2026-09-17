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

// Function: sub_00491D70
// Address: 0x491d70 - 0x491f08
void sub_00491D70_0x491d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491D70_0x491d70");
#endif

    switch (ctx->pc) {
        case 0x491d84u: goto label_491d84;
        case 0x491db0u: goto label_491db0;
        case 0x491e50u: goto label_491e50;
        case 0x491e64u: goto label_491e64;
        case 0x491e90u: goto label_491e90;
        default: break;
    }

    ctx->pc = 0x491d70u;

    // 0x491d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x491d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x491d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x491d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x491d78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x491d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x491d7c: 0xc124620  jal         func_491880
    ctx->pc = 0x491D7Cu;
    SET_GPR_U32(ctx, 31, 0x491D84u);
    ctx->pc = 0x491D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491D7Cu;
    // 0x491d80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x491D7Cu, 0x491D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491D84u;
label_491d84:
    // 0x491d84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491d8c: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x491d8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961156)));
    // 0x491d90: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x491D90u;
    {
        const bool branch_taken_0x491d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D90u;
        // 0x491d94: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491d90) {
            ctx->pc = 0x491DD0u;
            goto label_491dd0;
        }
    }
    ctx->pc = 0x491D98u;
    // 0x491d98: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x491d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x491d9c: 0x24821500  addiu       $v0, $a0, 0x1500
    ctx->pc = 0x491d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
    // 0x491da0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491da8: 0x8463e806  lh          $v1, -0x17FA($v1)
    ctx->pc = 0x491da8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x491dac: 0x0  nop
    ctx->pc = 0x491dacu;
    // NOP
label_491db0:
    // 0x491db0: 0x0  nop
    ctx->pc = 0x491db0u;
    // NOP
    // 0x491db4: 0x0  nop
    ctx->pc = 0x491db4u;
    // NOP
    // 0x491db8: 0x0  nop
    ctx->pc = 0x491db8u;
    // NOP
    // 0x491dbc: 0x0  nop
    ctx->pc = 0x491dbcu;
    // NOP
    // 0x491dc0: 0x0  nop
    ctx->pc = 0x491dc0u;
    // NOP
    // 0x491dc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x491DC4u;
    {
        const bool branch_taken_0x491dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x491dc4) {
            ctx->pc = 0x491DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491db0;
        }
    }
    ctx->pc = 0x491DCCu;
    // 0x491dcc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x491dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_491dd0:
    // 0x491dd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x491dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491dd4: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x491dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x491dd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x491dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x491ddc: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x491ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x491de0: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x491de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x491de4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x491de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x491de8: 0x24840082  addiu       $a0, $a0, 0x82
    ctx->pc = 0x491de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 130));
    // 0x491dec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491decu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491df0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491df4: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x491df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x491df8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491df8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491dfc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491e00: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x491e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x491e04: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491e08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491e0c: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x491e0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x491e10: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491e10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491e14: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491e18: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x491e18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x491e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x491e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491e20: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491e20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491e24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491e28: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x491e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x491e2c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x491e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x491e30: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x491e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x491e34: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x491e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x491e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x491e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x491e3c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x491e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491e40: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x491e40u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x491e44: 0x3e00008  jr          $ra
    ctx->pc = 0x491E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E44u;
        // 0x491e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491E4Cu;
    // 0x491e4c: 0x0  nop
    ctx->pc = 0x491e4cu;
    // NOP
label_491e50:
    // 0x491e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x491e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x491e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x491e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x491e58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x491e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x491e5c: 0xc124620  jal         func_491880
    ctx->pc = 0x491E5Cu;
    SET_GPR_U32(ctx, 31, 0x491E64u);
    ctx->pc = 0x491E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491E5Cu;
    // 0x491e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x491E5Cu, 0x491E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E64u;
label_491e64:
    // 0x491e64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491e68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491e6c: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x491e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961156)));
    // 0x491e70: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x491E70u;
    {
        const bool branch_taken_0x491e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491E70u;
        // 0x491e74: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e70) {
            ctx->pc = 0x491EB0u;
            goto label_491eb0;
        }
    }
    ctx->pc = 0x491E78u;
    // 0x491e78: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x491e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x491e7c: 0x24821500  addiu       $v0, $a0, 0x1500
    ctx->pc = 0x491e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
    // 0x491e80: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491e88: 0x8463e806  lh          $v1, -0x17FA($v1)
    ctx->pc = 0x491e88u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x491e8c: 0x0  nop
    ctx->pc = 0x491e8cu;
    // NOP
label_491e90:
    // 0x491e90: 0x0  nop
    ctx->pc = 0x491e90u;
    // NOP
    // 0x491e94: 0x0  nop
    ctx->pc = 0x491e94u;
    // NOP
    // 0x491e98: 0x0  nop
    ctx->pc = 0x491e98u;
    // NOP
    // 0x491e9c: 0x0  nop
    ctx->pc = 0x491e9cu;
    // NOP
    // 0x491ea0: 0x0  nop
    ctx->pc = 0x491ea0u;
    // NOP
    // 0x491ea4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x491EA4u;
    {
        const bool branch_taken_0x491ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x491ea4) {
            ctx->pc = 0x491E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491e90;
        }
    }
    ctx->pc = 0x491EACu;
    // 0x491eac: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x491eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_491eb0:
    // 0x491eb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x491eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x491eb4: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x491eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x491eb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x491eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x491ebc: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x491ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x491ec0: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x491ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x491ec4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x491ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x491ec8: 0x24840082  addiu       $a0, $a0, 0x82
    ctx->pc = 0x491ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 130));
    // 0x491ecc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491eccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491ed0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491ed4: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x491ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x491ed8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491edc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x491edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x491ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x491ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491ee4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x491ee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x491ee8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x491ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x491eec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x491eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x491ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x491ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x491ef4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x491ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491ef8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x491ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x491efc: 0x3e00008  jr          $ra
    ctx->pc = 0x491EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491EFCu;
        // 0x491f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491F04u;
    // 0x491f04: 0x0  nop
    ctx->pc = 0x491f04u;
    // NOP
    ctx->pc = 0x491f08u;
}
