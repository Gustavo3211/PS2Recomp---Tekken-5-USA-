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

// Function: sub_005092E8
// Address: 0x5092e8 - 0x5093d8
void sub_005092E8_0x5092e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005092E8_0x5092e8");
#endif

    ctx->pc = 0x5092e8u;

    // 0x5092e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5092e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5092ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x5092ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5092f0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x5092f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5092f4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x5092f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5092f8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x5092f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5092fc: 0x31c40  sll         $v1, $v1, 17
    ctx->pc = 0x5092fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
    // 0x509300: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x509300u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x509304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x509304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x509308: 0x31c40  sll         $v1, $v1, 17
    ctx->pc = 0x509308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
    // 0x50930c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x50930cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x509310: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x509310u;
    {
        const bool branch_taken_0x509310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x509314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509310u;
        // 0x509314: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509310) {
            ctx->pc = 0x509378u;
            goto label_509378;
        }
    }
    ctx->pc = 0x509318u;
    // 0x509318: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x509318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x50931c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x50931Cu;
    {
        const bool branch_taken_0x50931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50931c) {
            ctx->pc = 0x509320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50931Cu;
            // 0x509320: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509338u;
            goto label_509338;
        }
    }
    ctx->pc = 0x509324u;
    // 0x509324: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x509324u;
    {
        const bool branch_taken_0x509324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x509324) {
            ctx->pc = 0x509328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509324u;
            // 0x509328: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509348u;
            goto label_509348;
        }
    }
    ctx->pc = 0x50932Cu;
    // 0x50932c: 0x3e00008  jr          $ra
    ctx->pc = 0x50932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50932Cu;
        // 0x509330: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50932Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509334u;
    // 0x509334: 0x0  nop
    ctx->pc = 0x509334u;
    // NOP
label_509338:
    // 0x509338: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x509338u;
    {
        const bool branch_taken_0x509338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x509338) {
            ctx->pc = 0x50933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509338u;
            // 0x50933c: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5093A8u;
            goto label_5093a8;
        }
    }
    ctx->pc = 0x509340u;
    // 0x509340: 0x3e00008  jr          $ra
    ctx->pc = 0x509340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509340u;
        // 0x509344: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509348u;
label_509348:
    // 0x509348: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x509348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50934c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x509350: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x509350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x509354: 0xa4444e30  sh          $a0, 0x4E30($v0)
    ctx->pc = 0x509354u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x903EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EB0u, _value); } while (0);
    // 0x509358: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x509358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50935c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x50935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x509360: 0xa4434e32  sh          $v1, 0x4E32($v0)
    ctx->pc = 0x509360u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903EB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EB2u, _value); } while (0);
    // 0x509364: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x509364u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x509368: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x509368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50936c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x50936Cu;
    {
        const bool branch_taken_0x50936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50936Cu;
        // 0x509370: 0xa4444e34  sh          $a0, 0x4E34($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20020), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50936c) {
            ctx->pc = 0x5093D0u;
            goto label_5093d0;
        }
    }
    ctx->pc = 0x509374u;
    // 0x509374: 0x0  nop
    ctx->pc = 0x509374u;
    // NOP
label_509378:
    // 0x509378: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x509378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50937c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x50937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x509380: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x509380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x509384: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x509384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x509388: 0xa4444e36  sh          $a0, 0x4E36($v0)
    ctx->pc = 0x509388u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x903EB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EB6u, _value); } while (0);
    // 0x50938c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x50938cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x509390: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x509390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x509394: 0xa4434e38  sh          $v1, 0x4E38($v0)
    ctx->pc = 0x509394u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903EB8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EB8u, _value); } while (0);
    // 0x509398: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x509398u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50939c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x50939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5093a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x5093A0u;
    {
        const bool branch_taken_0x5093a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5093A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5093A0u;
        // 0x5093a4: 0xa4444e3a  sh          $a0, 0x4E3A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20026), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5093a0) {
            ctx->pc = 0x5093D0u;
            goto label_5093d0;
        }
    }
    ctx->pc = 0x5093A8u;
label_5093a8:
    // 0x5093a8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x5093a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5093ac: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x5093acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x5093b0: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x5093b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x5093b4: 0xa4444e3c  sh          $a0, 0x4E3C($v0)
    ctx->pc = 0x5093b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x903EBCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EBCu, _value); } while (0);
    // 0x5093b8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x5093b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5093bc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x5093bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5093c0: 0xa4434e3e  sh          $v1, 0x4E3E($v0)
    ctx->pc = 0x5093c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903EBEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EBEu, _value); } while (0);
    // 0x5093c4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x5093c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5093c8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x5093c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5093cc: 0xa4444e40  sh          $a0, 0x4E40($v0)
    ctx->pc = 0x5093ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x903EC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EC0u, _value); } while (0);
label_5093d0:
    // 0x5093d0: 0x3e00008  jr          $ra
    ctx->pc = 0x5093D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5093D0u;
        // 0x5093d4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5093D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5093D8u;
}
