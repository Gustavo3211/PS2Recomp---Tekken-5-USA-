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

// Function: sub_00491A80
// Address: 0x491a80 - 0x491bc8
void sub_00491A80_0x491a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491A80_0x491a80");
#endif

    switch (ctx->pc) {
        case 0x491aa8u: goto label_491aa8;
        default: break;
    }

    ctx->pc = 0x491a80u;

    // 0x491a80: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x491a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x491a84: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x491a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x491a88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491a90: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x491a90u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x491a94: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x491A94u;
    {
        const bool branch_taken_0x491a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A94u;
        // 0x491a98: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491a94) {
            ctx->pc = 0x491AC4u;
            goto label_491ac4;
        }
    }
    ctx->pc = 0x491A9Cu;
    // 0x491a9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x491a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x491aa0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x491aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x491aa4: 0x8422e806  lh          $v0, -0x17FA($at)
    ctx->pc = 0x491aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961158)));
label_491aa8:
    // 0x491aa8: 0x0  nop
    ctx->pc = 0x491aa8u;
    // NOP
    // 0x491aac: 0x0  nop
    ctx->pc = 0x491aacu;
    // NOP
    // 0x491ab0: 0x0  nop
    ctx->pc = 0x491ab0u;
    // NOP
    // 0x491ab4: 0x0  nop
    ctx->pc = 0x491ab4u;
    // NOP
    // 0x491ab8: 0x0  nop
    ctx->pc = 0x491ab8u;
    // NOP
    // 0x491abc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x491ABCu;
    {
        const bool branch_taken_0x491abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491ABCu;
        // 0x491ac0: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491abc) {
            ctx->pc = 0x491AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491aa8;
        }
    }
    ctx->pc = 0x491AC4u;
label_491ac4:
    // 0x491ac4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x491ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x491ac8: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x491ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x491acc: 0x24890058  addiu       $t1, $a0, 0x58
    ctx->pc = 0x491accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x491ad0: 0x2488005c  addiu       $t0, $a0, 0x5C
    ctx->pc = 0x491ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x491ad4: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x491ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x491ad8: 0x248721f4  addiu       $a3, $a0, 0x21F4
    ctx->pc = 0x491ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8692));
    // 0x491adc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x491adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x491ae0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x491ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x491ae4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x491ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x491ae8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x491ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x491aec: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x491aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x491af0: 0x94830098  lhu         $v1, 0x98($a0)
    ctx->pc = 0x491af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x491af4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491af4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491af8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491afc: 0x9483220c  lhu         $v1, 0x220C($a0)
    ctx->pc = 0x491afcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8716)));
    // 0x491b00: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b04: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b08: 0x9483220e  lhu         $v1, 0x220E($a0)
    ctx->pc = 0x491b08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8718)));
    // 0x491b0c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b14: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x491b14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x491b18: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b1c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b20: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x491b20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x491b24: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b2c: 0x948321fc  lhu         $v1, 0x21FC($a0)
    ctx->pc = 0x491b2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8700)));
    // 0x491b30: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b34: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b38: 0x948321fe  lhu         $v1, 0x21FE($a0)
    ctx->pc = 0x491b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8702)));
    // 0x491b3c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b44: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x491b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x491b48: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b50: 0x94832264  lhu         $v1, 0x2264($a0)
    ctx->pc = 0x491b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8804)));
    // 0x491b54: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b58: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b5c: 0x94832266  lhu         $v1, 0x2266($a0)
    ctx->pc = 0x491b5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8806)));
    // 0x491b60: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b68: 0x94830096  lhu         $v1, 0x96($a0)
    ctx->pc = 0x491b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x491b6c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b70: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b74: 0x94830092  lhu         $v1, 0x92($a0)
    ctx->pc = 0x491b74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x491b78: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b80: 0x94832210  lhu         $v1, 0x2210($a0)
    ctx->pc = 0x491b80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8720)));
    // 0x491b84: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b88: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b8c: 0x94830020  lhu         $v1, 0x20($a0)
    ctx->pc = 0x491b8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x491b90: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491b94: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491b98: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x491b98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x491b9c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491ba0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491ba4: 0x94830026  lhu         $v1, 0x26($a0)
    ctx->pc = 0x491ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x491ba8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491bac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491bb0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x491bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x491bb4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x491bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x491bb8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x491bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x491bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x491BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491BBCu;
        // 0x491bc0: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491BC4u;
    // 0x491bc4: 0x0  nop
    ctx->pc = 0x491bc4u;
    // NOP
    ctx->pc = 0x491bc8u;
}
