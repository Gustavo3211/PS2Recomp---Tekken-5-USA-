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

// Function: sub_00336198
// Address: 0x336198 - 0x3362d8
void sub_00336198_0x336198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336198_0x336198");
#endif

    switch (ctx->pc) {
        case 0x3361b8u: goto label_3361b8;
        default: break;
    }

    ctx->pc = 0x336198u;

    // 0x336198: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x336198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33619c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3361a0: 0x25060004  addiu       $a2, $t0, 0x4
    ctx->pc = 0x3361a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3361a4: 0x25090038  addiu       $t1, $t0, 0x38
    ctx->pc = 0x3361a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
    // 0x3361a8: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x3361a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x3361ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3361acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3361b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3361b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361b4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3361b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3361b8:
    // 0x3361b8: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x3361b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x3361bc: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x3361bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3361c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3361c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3361c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3361c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3361c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3361c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3361cc: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x3361ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3361d0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x3361d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3361d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3361D4u;
    {
        const bool branch_taken_0x3361d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3361D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361D4u;
        // 0x3361d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3361d4) {
            ctx->pc = 0x3361B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3361b8;
        }
    }
    ctx->pc = 0x3361DCu;
    // 0x3361dc: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x3361dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x3361e0: 0x2507001c  addiu       $a3, $t0, 0x1C
    ctx->pc = 0x3361e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x3361e4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x3361e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x3361e8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3361e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3361ec: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x3361ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x3361f0: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x3361f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x3361f4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x3361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3361f8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x3361f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x3361fc: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x3361fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x336200: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x336200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x336204: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x336204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x336208: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x336208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33620c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x336210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x336214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x336218: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x336218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x33621c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33621cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x336220: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x336220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x336224: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x336224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x336228: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x336228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33622c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x336230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336234: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x336234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x336238: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x336238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x33623c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x33623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x336240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336244: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x336244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x336248: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x336248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33624c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x33624cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x336250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x336250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336254: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x336254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336258: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x336258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33625c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x33625cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x336260: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x336260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x336264: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x336264u;
    {
        const bool branch_taken_0x336264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336264) {
            ctx->pc = 0x336268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336264u;
            // 0x336268: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336278u;
            goto label_336278;
        }
    }
    ctx->pc = 0x33626Cu;
    // 0x33626c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x33626cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x336270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336270u;
    {
        const bool branch_taken_0x336270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336270u;
        // 0x336274: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336270) {
            ctx->pc = 0x336284u;
            goto label_336284;
        }
    }
    ctx->pc = 0x336278u;
label_336278:
    // 0x336278: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x336278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33627c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x33627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x336280: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x336280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_336284:
    // 0x336284: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x336284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x336288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33628c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x33628cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x336290: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x336290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x336294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336298: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x336298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x33629c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3362a0: 0xad0001b8  sw          $zero, 0x1B8($t0)
    ctx->pc = 0x3362a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 440), GPR_U32(ctx, 0));
    // 0x3362a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3362a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3362a8: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x3362a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3362ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3362acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362b0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3362b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3362b4: 0xad040178  sw          $a0, 0x178($t0)
    ctx->pc = 0x3362b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 376), GPR_U32(ctx, 4));
    // 0x3362b8: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x3362b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x3362bc: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x3362bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x3362c0: 0x8d0201b8  lw          $v0, 0x1B8($t0)
    ctx->pc = 0x3362c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 440)));
    // 0x3362c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3362c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3362c8: 0xad0201b8  sw          $v0, 0x1B8($t0)
    ctx->pc = 0x3362c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 440), GPR_U32(ctx, 2));
    // 0x3362cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3362CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3362D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362CCu;
        // 0x3362d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3362CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3362D4u;
    // 0x3362d4: 0x0  nop
    ctx->pc = 0x3362d4u;
    // NOP
    ctx->pc = 0x3362d8u;
}
