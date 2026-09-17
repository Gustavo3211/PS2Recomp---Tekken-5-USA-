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

// Function: sub_001F1250
// Address: 0x1f1250 - 0x1f1300
void sub_001F1250_0x1f1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1250_0x1f1250");
#endif

    switch (ctx->pc) {
        case 0x1f1258u: goto label_1f1258;
        case 0x1f1270u: goto label_1f1270;
        case 0x1f12c0u: goto label_1f12c0;
        default: break;
    }

    ctx->pc = 0x1f1250u;

    // 0x1f1250: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F1250u;
    {
        const bool branch_taken_0x1f1250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1250u;
        // 0x1f1254: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1250) {
            ctx->pc = 0x1F12F0u;
            goto label_1f12f0;
        }
    }
    ctx->pc = 0x1F1258u;
label_1f1258:
    // 0x1f1258: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f1258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f125c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F125Cu;
    {
        const bool branch_taken_0x1f125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f125c) {
            ctx->pc = 0x1F1260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F125Cu;
            // 0x1f1260: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F12F0u;
            goto label_1f12f0;
        }
    }
    ctx->pc = 0x1F1264u;
    // 0x1f1264: 0x240a0800  addiu       $t2, $zero, 0x800
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1f1268: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1f1268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f126c: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x1f126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_1f1270:
    // 0x1f1270: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1270u;
    {
        const bool branch_taken_0x1f1270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1270) {
            ctx->pc = 0x1F1274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1270u;
            // 0x1f1274: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1290u;
            goto label_1f1290;
        }
    }
    ctx->pc = 0x1F1278u;
    // 0x1f1278: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1f1278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f127c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1280: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f1280u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1284: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1284u;
    {
        const bool branch_taken_0x1f1284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1284u;
        // 0x1f1288: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1284) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F128Cu;
    // 0x1f128c: 0x0  nop
    ctx->pc = 0x1f128cu;
    // NOP
label_1f1290:
    // 0x1f1290: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1294: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1f1294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f1298: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f129c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1f129cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f12a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f12a4: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x1f12a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1f12a8: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0x1f12a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1f12ac: 0x146300a  movz        $a2, $t2, $a2
    ctx->pc = 0x1f12acu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 10));
    // 0x1f12b0: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x1f12b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f12b4: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0x1f12b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f12b8: 0x126300a  movz        $a2, $t1, $a2
    ctx->pc = 0x1f12b8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
    // 0x1f12bc: 0x0  nop
    ctx->pc = 0x1f12bcu;
    // NOP
label_1f12c0:
    // 0x1f12c0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1f12c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f12c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f12c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f12c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f12c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f12cc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f12ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f12d0: 0x0  nop
    ctx->pc = 0x1f12d0u;
    // NOP
    // 0x1f12d4: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F12D4u;
    {
        const bool branch_taken_0x1f12d4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D4u;
        // 0x1f12d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d4) {
            ctx->pc = 0x1F12C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12c0;
        }
    }
    ctx->pc = 0x1F12DCu;
label_1f12dc:
    // 0x1f12dc: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x1f12dcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x1f12e0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f12e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f12e4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F12E4u;
    {
        const bool branch_taken_0x1f12e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12E4u;
        // 0x1f12e8: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12e4) {
            ctx->pc = 0x1F1270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1270;
        }
    }
    ctx->pc = 0x1F12ECu;
    // 0x1f12ec: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x1f12ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f12f0:
    // 0x1f12f0: 0x1500ffd9  bnez        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1F12F0u;
    {
        const bool branch_taken_0x1f12f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12F0u;
        // 0x1f12f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12f0) {
            ctx->pc = 0x1F1258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1258;
        }
    }
    ctx->pc = 0x1F12F8u;
    // 0x1f12f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F12F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F12F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1300u;
}
