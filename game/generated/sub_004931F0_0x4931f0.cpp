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

// Function: sub_004931F0
// Address: 0x4931f0 - 0x493318
void sub_004931F0_0x4931f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004931F0_0x4931f0");
#endif

    switch (ctx->pc) {
        case 0x493200u: goto label_493200;
        case 0x493218u: goto label_493218;
        case 0x493268u: goto label_493268;
        case 0x493278u: goto label_493278;
        case 0x4932a0u: goto label_4932a0;
        default: break;
    }

    ctx->pc = 0x4931f0u;

    // 0x4931f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4931f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4931f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4931F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4931F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4931F4u;
        // 0x4931f8: 0x24420880  addiu       $v0, $v0, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4931F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4931FCu;
    // 0x4931fc: 0x0  nop
    ctx->pc = 0x4931fcu;
    // NOP
label_493200:
    // 0x493200: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x493200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x493204: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x493204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x493208: 0x24490a10  addiu       $t1, $v0, 0xA10
    ctx->pc = 0x493208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2576));
    // 0x49320c: 0x24680880  addiu       $t0, $v1, 0x880
    ctx->pc = 0x49320cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x493210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x493210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493214: 0x0  nop
    ctx->pc = 0x493214u;
    // NOP
label_493218:
    // 0x493218: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x493218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x49321c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x49321cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x493220: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x493220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x493224: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x493224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x493228: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x493228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49322c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49322cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x493230: 0x28e6000a  slti        $a2, $a3, 0xA
    ctx->pc = 0x493230u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x493234: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x493234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x493238: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x493238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49323c: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x49323cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x493240: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x493240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x493244: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x493244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x493248: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x493248u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x49324c: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x49324cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x493250: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x493250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x493254: 0x90a2000e  lbu         $v0, 0xE($a1)
    ctx->pc = 0x493254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x493258: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x493258u;
    {
        const bool branch_taken_0x493258 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x49325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493258u;
        // 0x49325c: 0xa0820007  sb          $v0, 0x7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493258) {
            ctx->pc = 0x493218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493218;
        }
    }
    ctx->pc = 0x493260u;
    // 0x493260: 0x3e00008  jr          $ra
    ctx->pc = 0x493260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493268u;
label_493268:
    // 0x493268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x493268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49326c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x493270: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x493270u;
    SET_GPR_U32(ctx, 31, 0x493278u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x493270u, 0x493278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493278u;
label_493278:
    // 0x493278: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x493278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x49327c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x49327cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x493280: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x493280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493284: 0x248a7c18  addiu       $t2, $a0, 0x7C18
    ctx->pc = 0x493284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 31768));
    // 0x493288: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x493288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49328c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49328cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493290: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x493290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x493294: 0x254c0004  addiu       $t4, $t2, 0x4
    ctx->pc = 0x493294u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x493298: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x493298u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49329c: 0x24ab0880  addiu       $t3, $a1, 0x880
    ctx->pc = 0x49329cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 2176));
label_4932a0:
    // 0x4932a0: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x4932a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x4932a4: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x4932a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4932a8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4932a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4932ac: 0x8a3021  addu        $a2, $a0, $t2
    ctx->pc = 0x4932acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4932b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4932b4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4932b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4932b8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x4932b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4932bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4932bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4932c0: 0x2928000a  slti        $t0, $t1, 0xA
    ctx->pc = 0x4932c0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4932c4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4932c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4932c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4932c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4932cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4932ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4932d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4932d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4932d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4932d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4932d8: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x4932d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4932dc: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x4932dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4932e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4932e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4932e4: 0x94c2000a  lhu         $v0, 0xA($a2)
    ctx->pc = 0x4932e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x4932e8: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x4932e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x4932ec: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x4932ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4932f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4932f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4932f4: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x4932f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4932f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4932f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4932fc: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x4932fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x493300: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x493300u;
    {
        const bool branch_taken_0x493300 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x493304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493300u;
        // 0x493304: 0xa462000e  sh          $v0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493300) {
            ctx->pc = 0x4932A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4932a0;
        }
    }
    ctx->pc = 0x493308u;
    // 0x493308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x493308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49330c: 0x8124c80  j           func_493200
    ctx->pc = 0x49330Cu;
    ctx->pc = 0x493310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49330Cu;
    // 0x493310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493200u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_493200;
    ctx->pc = 0x493314u;
    // 0x493314: 0x0  nop
    ctx->pc = 0x493314u;
    // NOP
    ctx->pc = 0x493318u;
}
