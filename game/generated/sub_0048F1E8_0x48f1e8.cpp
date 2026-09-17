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

// Function: sub_0048F1E8
// Address: 0x48f1e8 - 0x48f2a8
void sub_0048F1E8_0x48f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F1E8_0x48f1e8");
#endif

    switch (ctx->pc) {
        case 0x48f204u: goto label_48f204;
        case 0x48f220u: goto label_48f220;
        case 0x48f238u: goto label_48f238;
        default: break;
    }

    ctx->pc = 0x48f1e8u;

    // 0x48f1e8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48f1ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f1f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f1f4: 0x2484f650  addiu       $a0, $a0, -0x9B0
    ctx->pc = 0x48f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x48f1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f1fc: 0xc04a151  jal         func_128544
    ctx->pc = 0x48F1FCu;
    SET_GPR_U32(ctx, 31, 0x48F204u);
    ctx->pc = 0x48F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F1FCu;
    // 0x48f200: 0x24061e00  addiu       $a2, $zero, 0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x48F1FCu, 0x48F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F204u;
label_48f204:
    // 0x48f204: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48f204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48f208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f20c: 0x24841450  addiu       $a0, $a0, 0x1450
    ctx->pc = 0x48f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5200));
    // 0x48f210: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f214: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x48f214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x48f218: 0x804a151  j           func_128544
    ctx->pc = 0x48F218u;
    ctx->pc = 0x48F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F218u;
    // 0x48f21c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    sub_00128544_0x128544(rdram, ctx, runtime); return;
    ctx->pc = 0x48F220u;
label_48f220:
    // 0x48f220: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f224: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x48f224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x48f228: 0x244cd68a  addiu       $t4, $v0, -0x2976
    ctx->pc = 0x48f228u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956682));
    // 0x48f22c: 0x246df650  addiu       $t5, $v1, -0x9B0
    ctx->pc = 0x48f22cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964816));
    // 0x48f230: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x48f230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f234: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x48f234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_48f238:
    // 0x48f238: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x48f238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x48f23c: 0x248223c0  addiu       $v0, $a0, 0x23C0
    ctx->pc = 0x48f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 9152));
    // 0x48f240: 0x248323c2  addiu       $v1, $a0, 0x23C2
    ctx->pc = 0x48f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 9154));
    // 0x48f244: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x48f244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x48f248: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x48f248u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x48f24c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x48f24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48f250: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x48f250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f254: 0x6c3021  addu        $a2, $v1, $t4
    ctx->pc = 0x48f254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x48f258: 0x29490008  slti        $t1, $t2, 0x8
    ctx->pc = 0x48f258u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48f25c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48F25Cu;
    {
        const bool branch_taken_0x48f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F25Cu;
        // 0x48f260: 0x94a70000  lhu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f25c) {
            ctx->pc = 0x48F278u;
            goto label_48f278;
        }
    }
    ctx->pc = 0x48F264u;
    // 0x48f264: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x48f264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48f268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48F268u;
    {
        const bool branch_taken_0x48f268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f268) {
            ctx->pc = 0x48F290u;
            goto label_48f290;
        }
    }
    ctx->pc = 0x48F270u;
    // 0x48f270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48F270u;
    {
        const bool branch_taken_0x48f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F270u;
        // 0x48f274: 0xa5070800  sh          $a3, 0x800($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 2048), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f270) {
            ctx->pc = 0x48F27Cu;
            goto label_48f27c;
        }
    }
    ctx->pc = 0x48F278u;
label_48f278:
    // 0x48f278: 0xa5070800  sh          $a3, 0x800($t0)
    ctx->pc = 0x48f278u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2048), (uint16_t)GPR_U32(ctx, 7));
label_48f27c:
    // 0x48f27c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x48f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x48f280: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48f280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48f284: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x48f284u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48f288: 0xa5620802  sh          $v0, 0x802($t3)
    ctx->pc = 0x48f288u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2050), (uint16_t)GPR_U32(ctx, 2));
    // 0x48f28c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x48f28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_48f290:
    // 0x48f290: 0x1520ffe9  bnez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x48F290u;
    {
        const bool branch_taken_0x48f290 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F290u;
        // 0x48f294: 0xa2080  sll         $a0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f290) {
            ctx->pc = 0x48F238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f238;
        }
    }
    ctx->pc = 0x48F298u;
    // 0x48f298: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f29c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48f2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x48F2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2A0u;
        // 0x48f2a4: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F2A8u;
}
